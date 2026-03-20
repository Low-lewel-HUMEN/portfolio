#include <stdio.h>
#include <windows.h>

int logger(const char *lpStr, size_t stElementSize, size_t stStrSize, const char *lpFileName) {

    FILE *lpFile = fopen(lpFileName, "a");

    if (lpFile == NULL) return 1;
//  if (lpFile != NULL) continue;

    fwrite(lpStr, stElementSize, stStrSize, lpFile);
    fclose(lpFile);

    return 0;
}

int loggerFast(const char *lpStr, size_t stElementSize, size_t stStrSize, FILE *lpFile) {

    if (lpFile == NULL) return 1;
//  if (lpFile != NULL) continue;

    fwrite(lpStr, stElementSize, stStrSize, lpFile);
    return 0;
}

int loggerVFast(const char *lpStr, size_t stElementSize, size_t stStrSize, FILE *lpFile) {

    fwrite(lpStr, stElementSize, stStrSize, lpFile);
    return 0;
}

int main() {

    // Simple logger

    logger("log1", 1, 4, "logger.log");
    logger("log2", 1, 4, "logger.log");

    // Fast logger

    FILE *hFile = fopen("logger.log", "a");

    loggerFast("log3", 1, 4, hFile);
    loggerFast("log4", 1, 4, hFile);

    fclose(hFile);
    hFile = NULL;

    // Very fast logger

    hFile = fopen("logger.log", "a");

    loggerVFast("log5", 1, 4, hFile);
    loggerVFast("log6", 1, 4, hFile);

    fclose(hFile);
    hFile = NULL;

    ExitProcess(0);
}