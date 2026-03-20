#define BUFFER_SIZE 4096

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {

    void *lpBuffer = malloc(BUFFER_SIZE);

    size_t stBytesReaden;
    size_t stBytesWritten;

    FILE *hFile1;
    FILE *hFile2;

    hFile1 = fopen("file1.txt", "r");
    hFile2 = fopen("file2.txt", "w");

    if (hFile1 == NULL || hFile2 == NULL) {
        if (hFile1 != NULL) fclose(hFile1);
        if (hFile2 != NULL) fclose(hFile2);
        free(lpBuffer);
        
        ExitProcess(1);
    }

    while ((stBytesReaden = fread(lpBuffer, 1, BUFFER_SIZE, hFile1)) > 0) {
        stBytesWritten = fwrite(lpBuffer, 1, stBytesReaden, hFile2);
    }

    fclose(hFile1);
    fclose(hFile2);
    free(lpBuffer);

    ExitProcess(0);
}

