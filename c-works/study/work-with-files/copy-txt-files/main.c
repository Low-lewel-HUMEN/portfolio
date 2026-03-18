#define BUFFER_SIZE 4096

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {

    void *buffer = malloc(BUFFER_SIZE);

    int bytes_readen;
    int bytes_written;

    FILE *file1;
    FILE *file2;

    file1 = fopen("file1.txt", "r");
    file2 = fopen("file2.txt", "w");

    if (file1 == NULL || file2 == NULL) {
        if (file1 == NULL) fclose(file1);
        if (file2 == NULL) fclose(file2);
        free(buffer);
        
        ExitProcess(1);
    }

    while ((bytes_readen = fread(buffer, 1, BUFFER_SIZE, file1)) > 0) {
        bytes_written = fwrite(buffer, 1, bytes_readen, file2);
    }

    fclose(file1);
    fclose(file2);
    free(buffer);

    ExitProcess(0);
}

