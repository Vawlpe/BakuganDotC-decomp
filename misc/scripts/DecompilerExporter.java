/* ###
 * IP: GHIDRA
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

import java.io.*;
import java.nio.file.Files;
import java.nio.file.Paths;
import java.util.*;

import generic.cache.CachingPool;
import generic.cache.CountingBasicFactory;
import generic.concurrent.QCallback;
import ghidra.app.decompiler.*;
import ghidra.app.decompiler.DecompileOptions.CommentStyleEnum;
import ghidra.app.decompiler.parallel.ChunkingParallelDecompiler;
import ghidra.app.decompiler.parallel.ParallelDecompiler;
import ghidra.app.script.GhidraScript;
import ghidra.program.database.symbol.SymbolManager;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressSetView;
import ghidra.program.model.data.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.mem.MemoryAccessException;
import ghidra.program.model.symbol.Symbol;
import ghidra.program.model.symbol.SymbolType;
import ghidra.util.Msg;
import ghidra.util.exception.CancelledException;
import ghidra.util.task.*;

public class DecompilerExporter extends GhidraScript {

	private static String EOL = System.getProperty("line.separator");
	private boolean isUseCppStyleComments = true;
	private DecompileOptions options;
	private String odirpath = "/tmp/decomp_exporter";
	private String header_filename;
	private String glob_filename;

	@Override
	protected void run() throws Exception {
		String[] args = getScriptArgs();
		if (args.length == 0) {
			System.err.println("Using " + odirpath + " as default path");
		} else {
			odirpath = args[0];
		}

		Files.createDirectories(Paths.get(odirpath));
		header_filename = odirpath + "/" + currentProgram.getName() + ".h";
		glob_filename = odirpath + "/glob.c";

		Program program = currentProgram;

		options = new DecompileOptions();
		options.setCommentStyle(CommentStyleEnum.CPPStyle);

		AddressSetView addrSet = program.getMemory();

		CachingPool<DecompInterface> decompilerPool = new CachingPool<>(new DecompilerFactory(program));
		ParallelDecompilerCallback callback = new ParallelDecompilerCallback(decompilerPool);
		ChunkingTaskMonitor chunkingMonitor = new ChunkingTaskMonitor(monitor);
		ChunkingParallelDecompiler<CPPResult> parallelDecompiler = ParallelDecompiler
				.createChunkingParallelDecompiler(callback, chunkingMonitor);

		PrintWriter headerWriter = new PrintWriter(header_filename);

		try {
			writeProgramDataTypes(program, headerWriter, chunkingMonitor);
			writeProgramGlobalVariables(program, headerWriter, chunkingMonitor);
			chunkingMonitor.checkCanceled();

			decompileAndExport(addrSet, program, headerWriter, parallelDecompiler, chunkingMonitor);
		} catch (CancelledException e) {
			Msg.error(this, "Operation Cancelled");
		} catch (Exception e) {
			Msg.error(this, "Error exporting C/C++", e);
		} finally {
			decompilerPool.dispose();
			parallelDecompiler.dispose();

			if (headerWriter != null) {
				headerWriter.close();
			}
		}
	}

	private void decompileAndExport(AddressSetView addrSet, Program program, PrintWriter headerWriter,
			ChunkingParallelDecompiler<CPPResult> parallelDecompiler, ChunkingTaskMonitor chunkingMonitor)
			throws InterruptedException, Exception, CancelledException {

		int functionCount = program.getFunctionManager().getFunctionCount();
		chunkingMonitor.doInitialize(functionCount);

		Listing listing = program.getListing();
		FunctionIterator iterator = listing.getFunctions(addrSet, true);
		List<Function> functions = new ArrayList<>();
		for (int i = 0; iterator.hasNext(); i++) {
			//
			// Write results every so many items so that we don't blow out memory
			//
			if (i % 10000 == 0) {
				List<CPPResult> results = parallelDecompiler.decompileFunctions(functions);
				writeResults(results, headerWriter, chunkingMonitor);
				functions.clear();
			}

			Function currentFunction = iterator.next();
			if (excludeFunction(currentFunction)) {
				continue;
			}

			functions.add(currentFunction);
		}

		// handle any remaining functions
		List<CPPResult> results = parallelDecompiler.decompileFunctions(functions);
		writeResults(results, headerWriter, chunkingMonitor);
	}

	private boolean excludeFunction(Function currentFunction) {
		return currentFunction.isExternal() || currentFunction.isThunk();
	}

	private void writeResults(List<CPPResult> results, PrintWriter headerWriter, TaskMonitor monitor)
			throws CancelledException {
		monitor.checkCanceled();

		Collections.sort(results);

		StringBuilder headers = new StringBuilder();
		for (CPPResult result : results) {
			monitor.checkCanceled();
			if (result == null) {
				continue;
			}
			String headerCode = result.getHeaderCode();
			if (headerCode != null) {
				headers.append(headerCode);
				headers.append(EOL);
			}

			String bodyCode = result.getBodyCode();
			String function_filename = odirpath + "/" + result.name + ".c";
			try {
				PrintWriter functionWriter = new PrintWriter(function_filename);
				functionWriter.write("#include \"" + Paths.get(header_filename).getFileName().toString() + "\"\n");
				functionWriter.write(bodyCode);
				functionWriter.close();
			} catch (IOException e) {
				Msg.error(this, "Unable to write function " + result.name);
			}
		}

		monitor.checkCanceled();

		if (headerWriter != null) {
			headerWriter.println(headers.toString());
		}
	}

	private void writeProgramDataTypes(Program program, PrintWriter headerWriter, TaskMonitor monitor)
			throws IOException, CancelledException {
		DataTypeManager dtm = program.getDataTypeManager();
		DataTypeWriter dataTypeWriter = new DataTypeWriter(dtm, headerWriter, isUseCppStyleComments);
		headerWriter.write(getFakeCTypeDefinitions(dtm.getDataOrganization()));
		dataTypeWriter.write(dtm, monitor);

		headerWriter.println("");
		headerWriter.println("");
	}

	private static String bytes_to_array_str(byte[] data) {
		StringBuilder cbuf = new StringBuilder();
		for (byte b : data) {
			cbuf.append(String.format("0x%02x, ", b & 0xFF));
		}
		return cbuf.toString();
	}

	public static String escape_byte_to_str(byte[] data) {
		StringBuilder cbuf = new StringBuilder();
		for (byte b : data) {
			if (b >= 0x20 && b <= 0x7e) {
				cbuf.append((char) b);
			} else {
				cbuf.append(String.format("\\x%02x", b & 0xFF));
			}
		}
		return cbuf.toString();
	}

	private void writeProgramGlobalVariables(Program program, PrintWriter headerWriter, TaskMonitor monitor)
			throws FileNotFoundException {
		// List globals

		PrintWriter globWriter = new PrintWriter(glob_filename);
		globWriter.write("#include \"" + Paths.get(header_filename).getFileName().toString() + "\"\n\n");

		SymbolManager smgr = (SymbolManager) program.getSymbolTable();
		for (Symbol sym : smgr.getAllSymbols(true)) {
			SymbolType st = sym.getSymbolType();
			if (st != SymbolType.LABEL)
				continue;
			DataType dataType;
			int data_size;
			Object dataObj = sym.getObject();
			if (dataObj instanceof Data) {
				dataType = ((Data) dataObj).getDataType();
				data_size = dataType.getLength();
			} else {
				dataType = DataType.DEFAULT;
				data_size = 1;
			}
			if (data_size < 0)
				data_size = 1;

			boolean is_string = dataType.getName() == "string" || dataType.getName() == "TerminatedCString";
			if (is_string) {
				data_size = 0;
				Memory memory = program.getMemory();
				while (true) {
					byte b;
					try {
						b = memory.getByte(sym.getAddress().add(data_size));
					} catch (MemoryAccessException e) {
						break;
					}
					if (b == 0)
						break;
					data_size += 1;
				}
			}

			String name_suffix = "";
			String data_type_name = dataType.getName();
			if (data_type_name.endsWith("]")) {
				String[] tokens = data_type_name.split("\\[");
				assert tokens.length == 2;
				data_type_name = tokens[0];
				name_suffix = "[" + tokens[1];
			}

			// TODO what happens if a name with forbidden characters is used in the
			// decompiler?
			String normalized_name = sym.getName().replaceAll("[^0-9a-zA-Z_]", "_");
			headerWriter.write("extern " + data_type_name + " " + normalized_name + name_suffix + ";\n");

			Memory memory = program.getMemory();
			byte[] bytes = new byte[data_size];
			for (int i = 0; i < data_size; i++)
				bytes[i] = 0;

			try {
				int count = memory.getBytes(sym.getAddress(), bytes);
				if (count != data_size)
					Msg.error(this, "unable to read all data from " + sym.getAddress().toString());
			} catch (MemoryAccessException e) {
				Msg.error(this, "unable to read data from " + sym.getAddress().toString());
			}

			globWriter.write(data_type_name + " " + normalized_name + name_suffix + " = "
					+ (is_string ? ("\" " + escape_byte_to_str(bytes) + " \"")
							: ("{ " + bytes_to_array_str(bytes) + " }"))
					+ " ;\n");
		}
		globWriter.close();
	}

	private static String getBuiltInDeclaration(String typeName, String ctypeName) {
		return "#define " + typeName + "   " + ctypeName + EOL;
	}

	private static String getBuiltInDeclaration(String typeName, int typeLen, boolean signed,
			DataOrganization dataOrganization) {
		return getBuiltInDeclaration(typeName, dataOrganization.getIntegerCTypeApproximation(typeLen, signed));
	}

	/**
	 * Generate suitable C-style definition statements (#define) for any fake
	 * data-type names which may be produced by the decompiler (e.g., unkint,
	 * unkuint, etc.).
	 * 
	 * @param dataOrganization is the data organization to result the size of core
	 *                         types.
	 * @return multi-line string containing C-style declarations of fake decompiler
	 *         types.
	 */
	private static String getFakeCTypeDefinitions(DataOrganization dataOrganization) {

		StringWriter writer = new StringWriter();

		// unkbyte - decompiler fabricated unknown types - need only cover sizes larger
		// than the max Undefined size
		for (int n = 9; n <= 16; n++) {
			writer.write(getBuiltInDeclaration("unkbyte" + n, n, false, dataOrganization));
		}
		writer.write(EOL);

		// unkuint - decompiler fabricated unsigned integer types
		// need only cover sizes larger than the max integer size (i.e.,
		// AbstractIntegerDataType)
		for (int n = 9; n <= 16; n++) {
			writer.write(getBuiltInDeclaration("unkuint" + n, n, false, dataOrganization));
		}
		writer.write(EOL);

		// unkint - decompiler fabricated signed integer types
		// need only cover sizes larger than the max integer size (i.e.,
		// AbstractIntegerDataType)
		for (int n = 9; n <= 16; n++) {
			writer.write(getBuiltInDeclaration("unkint" + n, n, true, dataOrganization));
		}
		writer.write(EOL);

		// unkfloat - decompiler fabricated floating point types
		writer.write(getBuiltInDeclaration("unkfloat1", "float"));
		writer.write(getBuiltInDeclaration("unkfloat2", "float"));
		writer.write(getBuiltInDeclaration("unkfloat3", "float"));
		// writer.write(getBuiltInDeclaration("unkfloat4", "float")); // covered by
		// fixed-size built-in float
		writer.write(getBuiltInDeclaration("unkfloat5", "double"));
		writer.write(getBuiltInDeclaration("unkfloat6", "double"));
		writer.write(getBuiltInDeclaration("unkfloat7", "double"));
		// writer.write(getBuiltInDeclaration("unkfloat8", "double")); // covered by
		// fixed-size built-in double
		writer.write(getBuiltInDeclaration("unkfloat9", "long double"));
		// writer.write(getBuiltInDeclaration("unkfloat10", "long double")); // covered
		// by fixed-size built-in longdouble
		writer.write(getBuiltInDeclaration("unkfloat11", "long double"));
		writer.write(getBuiltInDeclaration("unkfloat12", "long double"));
		writer.write(getBuiltInDeclaration("unkfloat13", "long double"));
		writer.write(getBuiltInDeclaration("unkfloat14", "long double"));
		writer.write(getBuiltInDeclaration("unkfloat15", "long double"));
		writer.write(getBuiltInDeclaration("unkfloat16", "long double"));
		writer.write(EOL);

		writer.write(getBuiltInDeclaration("BADSPACEBASE", "void"));
		writer.write(getBuiltInDeclaration("code", "void"));
		writer.write(EOL);

		writer.write(getBuiltInDeclaration("string", "char*"));
		writer.write(getBuiltInDeclaration("TerminatedCString", "char*"));
		writer.write(getBuiltInDeclaration("pointer", "unsigned long"));
		writer.write(getBuiltInDeclaration("bool", "int"));
		writer.write(getBuiltInDeclaration("true", "1"));
		writer.write(getBuiltInDeclaration("false", "0"));
		writer.write(EOL);

		return writer.toString();
	}

//==================================================================================================
// Inner Classes
//==================================================================================================

	private class CPPResult implements Comparable<CPPResult> {

		private String name;
		private Address address;
		private String bodyCode;
		private String headerCode;

		CPPResult(String name, Address address, String headerCode, String bodyCode) {
			this.name = name + "@" + address.toString();
			this.address = address;
			this.headerCode = headerCode;
			this.bodyCode = bodyCode;
		}

		String getHeaderCode() {
			return headerCode;
		}

		String getBodyCode() {
			return bodyCode;
		}

		@Override
		public int compareTo(CPPResult other) {
			return address.compareTo(other.address);
		}

	}

	private class DecompilerFactory extends CountingBasicFactory<DecompInterface> {

		private Program program;

		DecompilerFactory(Program program) {
			this.program = program;
		}

		@Override
		public DecompInterface doCreate(int itemNumber) throws IOException {
			DecompInterface decompiler = new DecompInterface();
			decompiler.setOptions(options);
			decompiler.openProgram(program);
			decompiler.toggleSyntaxTree(false); // Don't need syntax tree
			return decompiler;
		}

		@Override
		public void doDispose(DecompInterface decompiler) {
			decompiler.dispose();
		}
	}

	private class ParallelDecompilerCallback implements QCallback<Function, CPPResult> {

		private CachingPool<DecompInterface> pool;

		ParallelDecompilerCallback(CachingPool<DecompInterface> decompilerPool) {
			this.pool = decompilerPool;
		}

		@Override
		public CPPResult process(Function function, TaskMonitor monitor) throws Exception {
			if (monitor.isCancelled()) {
				return null;
			}

			DecompInterface decompiler = pool.get();
			try {
				CPPResult result = doWork(function, decompiler, monitor);
				return result;
			} finally {
				pool.release(decompiler);
			}
		}

		private CPPResult doWork(Function function, DecompInterface decompiler, TaskMonitor monitor) {
			Address entryPoint = function.getEntryPoint();
			CodeUnit codeUnitAt = function.getProgram().getListing().getCodeUnitAt(entryPoint);
			if (codeUnitAt == null || !(codeUnitAt instanceof Instruction)) {
				return new CPPResult(function.getName(), entryPoint, function.getPrototypeString(false, false) + ';',
						null);
			}

			monitor.setMessage("Decompiling " + function.getName());

			DecompileResults dr = decompiler.decompileFunction(function, options.getDefaultTimeout(), monitor);
			String errorMessage = dr.getErrorMessage();
			if (!"".equals(errorMessage)) {
				Msg.warn(this, "Error decompiling: " + errorMessage);
				return null;
			}

			DecompiledFunction decompiledFunction = dr.getDecompiledFunction();
			return new CPPResult(function.getName(), entryPoint, decompiledFunction.getSignature(),
					decompiledFunction.getC());
		}
	}

	/**
	 * A class that exists because we are doing something that the ConcurrentQ was
	 * not designed for--chunking. We do not want out monitor being reset every time
	 * we start a new chunk. So, we wrap a real monitor, overriding the behavior
	 * such that initialize() has no effect when it is called by the queue.
	 */
	private class ChunkingTaskMonitor extends TaskMonitorAdapter {
		private TaskMonitor monitor;

		ChunkingTaskMonitor(TaskMonitor monitor) {
			this.monitor = monitor;
		}

		void doInitialize(long value) {
			// this lets us initialize when we want to
			monitor.initialize(value);
		}

		@Override
		public void setProgress(long value) {
			monitor.setProgress(value);
		}

		@Override
		public void checkCanceled() throws CancelledException {
			monitor.checkCanceled();
		}

		@Override
		public void setMessage(String message) {
			monitor.setMessage(message);
		}

		@Override
		public synchronized void addCancelledListener(CancelledListener listener) {
			monitor.addCancelledListener(listener);
		}

		@Override
		public synchronized void removeCancelledListener(CancelledListener listener) {
			monitor.removeCancelledListener(listener);
		}
	}
}
