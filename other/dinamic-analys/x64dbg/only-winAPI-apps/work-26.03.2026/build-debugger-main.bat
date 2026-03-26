@echo off

gcc debugger-main.c -o debugger-main.exe -lkernel32 -nostdlib "-Wl,-e,entry"
pause