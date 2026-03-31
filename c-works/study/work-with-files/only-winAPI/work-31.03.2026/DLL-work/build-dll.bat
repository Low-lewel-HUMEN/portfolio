@echo off

gcc -shared fs/LogMessage.c fs/GetLogMessageEx.c fs/FreeLogMessageEx.c fs/LogMessageEx.c  -o log.dll -nostdlib -lkernel32 -s
pause