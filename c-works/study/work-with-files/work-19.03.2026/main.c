#include <stdio.h>
#include <windows.h>

int logger(const void *_Str, size_t _ElementSize, size_t _StrSize, const char *_FileName) {

    FILE *_File = fopen(_FileName, "a");

    if (_File == NULL) return 1;
//  if (_File != NULL) continue;

    fwrite(_Str, _ElementSize, _StrSize, _File);
    fclose(_File);

    return 0;
}

int loggerFast(const void *_Str, size_t _ElementSize, size_t _StrSize, FILE *_File) {

    if (_File == NULL) return 1;
//  if (_File != NULL) continue;

    fwrite(_Str, _ElementSize, _StrSize, _File);

    return 0;
}

int loggerVFast(const void *_Str, size_t _ElementSize, size_t _StrSize, FILE *_File) {

    fwrite(_Str, _ElementSize, _StrSize, _File);
    return 0;
}

int main() {

    // Simple logger

    logger("log1", 1, 4, "logger.log");
    logger("log2", 1, 4, "logger.log");

    // Fast logger

    FILE *file = fopen("logger.log", "a");

    loggerFast("log3", 1, 4, file);
    loggerFast("log4", 1, 4, file);

    fclose(file);
    file = NULL;

    // Very fast logger

    file = fopen("logger.log", "a");

    loggerVFast("log5", 1, 4, file);
    loggerVFast("log6", 1, 4, file);

    fclose(file);
    file = NULL;

    ExitProcess(0);
}