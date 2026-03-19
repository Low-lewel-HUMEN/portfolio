# Readme structure:
* [Features](#features)
* [Technical details](#technical-details)
* [To uses, need download..](#to-uses-need-download)
* [To uses, must be..](#to-uses-must-be)
* [How build this app?](#how-build-this-app)
* [How start using this app?](#how-start-using-this-app)

# Features
* Copy text from `file1.txt` to `file2.txt`
* Create `file2.txt`

# Technical details

This app do..
* allocated memory from heap (type `void*`, size `4096 bytes`);
* opened `file1.txt` and created or change `file2.txt` (if `file1.txt` not fount - program do `ExitProcess(1)` through `WinAPI`);
* readed 4096 bytes (size buffer) from file1.txt in `void *buffer`;
* writed 4096 bytes (size buffer) from `void *buffer` in file2.txt;
* read and write alternated through while to end `file1.txt`;
* exit process with `0` through `WinAPI` (if not errors).

# To uses, need download..
* Need download `gcc (C23)`
* Need download `git`

# To uses, must be..
* `GCC` must be added to PATH
* `GIT` must be added to PATH

# How build this app?
* Open `cmd` or `PowerShell`
* Write command:
```
git clone https://github.com/Low-lewel-HUMEN/portfolio main
```
* Open `build.bat` from folder `main \ c-works \ study \ work-with-files \ copy-txt-files`

# How start using this app?
* Need create or rename your `*.txt` in `file1.txt` near with `main.exe`, and start this program. After to how `file1.txt` copying - you can see `file2.txt` with text from `file1.txt`

**Warning**: only windows x64.  