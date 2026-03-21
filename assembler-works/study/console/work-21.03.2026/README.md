# Readme structure:
* [Features](#features)
* [Technical details](#technical-details)
* [To uses, need download..](#to-uses-need-download)
* [To uses, must be..](#to-uses-must-be)
* [How build this app?](#how-build-this-app)
* [How start using this app?](#how-start-using-this-app)

# Features
* Write text in console - "hell" 
* `Sleep` (pause) 5 seconds 

# Technical details

This app do..
1. call `GetStdHandle` (WinAPI) with arg `-11` (`-11` - handle for write in console) | C translate: `HANDLE hWriteConsole GetStdHandle(-11)`
2. call `WriteConsoleW` (WinAPI) from `kernel32` and write "hell" in console | C translate: `WriteConsoleW(hWriteConsole, *lpBuffer (dw), sizeof(dwBuffer), NULL, NULL)`
3. call `Sleep` (WinAPI) from `kernel32` with arg "5 seconds" | C translate: `Sleep(5000) // pause with 5 seconds`

# To uses, need download..
* Need download `nasm 3.01+`
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
* Open `build.bat` from folder `main \ assembler-works \ study \ work-with-files \ work-21.03.2026`

# How start using this app?
* Just open this program and you will see text from console

**Warning**: only windows x64.  