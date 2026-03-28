# Readme structure:
* [Features](#features)
* [Technical details](#technical-details)
* [To uses, need download..](#to-uses-need-download)
* [To uses, must be..](#to-uses-must-be)
* [How build this app?](#how-build-this-app)
* [How start using this app?](#how-start-using-this-app)

# Features
* Created `file.log` (if file not found) or opened (if existing)
* Changed `file.log` in hidden file (from simple)

# Technical details
This app do..
* created or opened file `file.log` with args - \[`FILE_ATTRIBUTE_NORMAL`\] and \[`GENERIC_ALL`\]
* save file attributes in variable `(DWORD)FileAttributes`
* changed file attributes in `FILE_ATTRIBUTE_HIDDEN` through:
```
FileAttribytes ^= FILE_ATTRIBUTE_NORMAL
FileAttributes |= FILE_ATTRIBUTE_HIDDEN
```
* save attributes in file through winAPI: `SetFileAttributesW` (Unicode)

# To uses, need download..
* Need download `git`
* Need download `gcc (C23+)`

# To uses, must be..
* `GCC` must be added to PATH
* `GIT` must be added to PATH

# How build this app?
* Open `cmd` or `PowerShell`
* Write command:
```
git clone https://github.com/Low-lewel-HUMEN/portfolio main
```
* Open `FILE_NAME.bat` from folder `"c-works \ study \ work-with-files \ only-winAPI \ work-28.03.2026"`

# How start using this app?
* Open main.exe🍹

**Warning**: only windows x64.  