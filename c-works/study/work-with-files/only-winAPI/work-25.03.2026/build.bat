@echo off

gcc main.c -o main.exe -lkernel32 -nostdlib -s "-Wl,-e,fn_start"
pause