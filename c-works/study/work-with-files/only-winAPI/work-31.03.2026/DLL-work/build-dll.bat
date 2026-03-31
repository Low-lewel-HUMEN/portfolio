@echo off

gcc -shared fs/LogMessage.c fs/GetLogMessageEx.c fs/LogMessageEx.c fs/FreeLogMessageEx.c fs/GetLogMessageEx2.c fs/LogMessageEx2.c fs/FreeLogMessageEx2.c -o log.dll -nostdlib -lkernel32 -s
pause