# Readme structure:
* [Features](#features)
* [Technical details](#technical-details)
* [To uses, need download..](#to-uses-need-download)
* [To uses, must be..](#to-uses-must-be)
* [How build this app?](#how-build-this-app)
* [How start using this app?](#how-start-using-this-app)

# Features
* Create logs (if `logger.log` not found) or add in end `logger.log` (if `logger.log` found)

# Technical details

This app valuable because in him 3 function:
* logger(`const void` *_Str, `size_t` _ElementSize, `size_t` _StrSize, `const char` *_FileName);
* loggerFast(`const void` *_Str, `size_t` _ElementSize, `size_t` _StrSize, `FILE` *_File);
* loggerVFast(`const void` *_Str, `size_t` _ElementSize, `size_t` _StrSize, `FILE` *_File);

I want create `DLL-lib` that will contain this functions, and will help create program on other programming languages


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
* Open `build.bat` from folder `"main \ c-works \ study \ work-with-files \ work-19.03.2026"`

# How start using this app?
* No ways. This test functions)

**Warning**: only windows x64.