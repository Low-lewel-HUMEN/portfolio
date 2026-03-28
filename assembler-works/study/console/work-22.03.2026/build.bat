@echo off

echo nasm building..
nasm -f win64 main.asm -o main.obj

echo gcc building..
gcc main.obj -o main.exe -nostdlib -lkernel32 "-Wl,-e,fn_start"

pause