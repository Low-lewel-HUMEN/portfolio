# Readme structure:
* [Features](#features)
* [Technical details](#technical-details)
* [To uses, need download..](#to-uses-need-download)
* [To uses, must be..](#to-uses-must-be)
* [How build this app?](#how-build-this-app)
* [How start using this app?](#how-start-using-this-app)

# Features
* Created or opened hidden (!) file with name `logger.log`
* if a file `logger.log` exists - app opened this file
* if the file `logger.log` not exists - app created the file `logger.log` and open this file 

# Technical details

This app do..
* called `CreateFileW` winAPI from `kernel32.dll` for created or opened file `logger.log`
* called `WriteConsoleW` winAPI from `kernel32.dll`
* called `Sleep` winAPI from `kernel32.dll` with arg `5000` (pause 5 seconds)
* called `ExitProcess` winAPI from `kernel32.dll` with arg `0` (normal exit) or `1` (error exit)

# To uses, need download..
* Need download `gcc (C23)`
* Need download `git`

# To uses, must be..
* `GCC` must be added to PATH
* `GIT` must be added to PATH
* `kernel32.dll` must be exists

# How build this app?
* Open `cmd` or `PowerShell`
* Write command:
```
git clone https://github.com/Low-lewel-HUMEN/portfolio main
```
* Open `build.bat` from folder `"main \ c-works \ study \ work-with-files \ only-winAPI \ work-25.03.2026"`

# How start using this app?
* Open `main.exe`

**Warning**: only windows x64.  