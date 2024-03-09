# BakuganDotC-decomp
A Decompilation attempt for Bakugan: Defenders of the Core

## Build a binary
***TBA***

## Contribute to the decompilation
- Run `git clone --recursive https://github.com/Vawlpe/BakuganDotC-decomp.git` in the directory you want to keep the project in
- Open ***Ghidra***, go to `File > Restore Project`, select the `misc/bakuganDotC.gar` file from the project directory, and save the project at `misc/bakuganDotC.ghidra.proj` so it's automatically excluded when you want to push changes
- Whenever you're done making changes (***This is stupid and will be made easier soon, but for now***):
  - Go to `Windows > Script Manager` and add the `misc/scripts/DecompilerExporter.java` file as a script, then run it, find it's output directory, usually under your `TEMP` dir, and copy all the files to `src/` sorting and renaming them manually into the appropriate subdirectories as needed.
  - `SAVE` the project, `CLOSE` it, and `ARCHIVE` it as "`misc/bakuganDotC.gar`", replacing the existing file.
  - Stage and commit your changes, then push them to your fork's remote, or directly to the main repo if you're a trusted contributor.

## Contribution Toolchain
- [***PPSSPP***](https://www.ppsspp.org/): Use the Windows version due to it's debugging capabilities, it runs fine under wine as well, but the native releases for other platforms do not include the debugger.
- [***Ghidra***](https://ghidra-sre.org/): Required to work on the decompilation, to use it you also need ***Java JDK x64 17+***
- [***Ghidra Allegrex Plugin***](https://github.com/kotcrab/ghidra-allegrex/): Required to work on PSP binaries in Ghidra, also enables the use of the Ghidra debugger in tandem with PPSSPP's debugger.
- A good hex editor (e.g [***ImHex***](https://imhex.werwolv.net/), [HxD](https://mh-nexus.de/en/hxd/), [010Editor](https://www.sweetscape.com/010editor/))
- Python & AutoHotkey for running various utility scripts
