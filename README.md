# BakuganDotC-decomp
A Decompilation attempt for Bakugan: Defenders of the Core

## Toolchain we use
- [***PPSSPP***](https://www.ppsspp.org/): Use the Windows version due to it's debugging capabilities, it runs fine under wine as well, but the native releases for other platforms do not include the debugger.
- [***Ghidra***](https://ghidra-sre.org/): Required to work on the decompilation
- [***Ghidra Allegrex Plugin***](https://github.com/kotcrab/ghidra-allegrex/): Required to work on PSP binaries in Ghidra, also enables the use of the Ghidra debugger in tandem with PPSSPP's debugger.
- A good hex editor (e.g [***ImHex***](https://imhex.werwolv.net/), [HxD](https://mh-nexus.de/en/hxd/), [010Editor](https://www.sweetscape.com/010editor/))
- Python & AutoHotkey for running various utility scripts
___

If you are unable to restore a project from the included Ghidra archive `misc/bakuganDotC.gar`, here's how to re-create the project yourself:
- Dump the decrypted EBOOT.bin of the game using PPSSPP, there's an option for this in the settings, enable it, run the game, and look for a file named something along the lines of `ULUS10536_MYTHREAD-MAIN.BIN`
- Create a new Ghidra project, import the afformentioned file, make sure the `Format` drop-down to `PSP Executable (ELF)`, it should already be set by default, (if you can't find this option, make sure you have the Allegrex plugin installed), then under `Options...` set the `Image Base` to `08804000`, and click `OK` 
- Open the file you just imported and run the auto-analysis, you can leave all the options as deafult
- Go to File > Parse C source. Clear whatever default profile it gives you, under the `Source Files to parse` section, add the `misc/uofw-headers` directory, set the `Program Architecture` to `Allegrex`, save the profile under a new name, and hit `Parse to Program`, when it asks about `generic_clib` tell it to `Use Open Archives`
- Go to Windows > Script Manager, search for `PpssppImportSymFile.py`, run the script, and chose the `misc/ULUS10536_MYTHREAD-MAIN.sym` file, input 0 for the offset

You should now have an up-to-date version of the project ready to work on~!
