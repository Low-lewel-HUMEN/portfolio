#include <windows.h>

int fn_start() {

    const wchar_t* szFileName = L"logger.log";

    const wchar_t* szMessageFNF = L"file not found, creating..\n";
    const wchar_t* szInvalidHandle = L"Creating: no";
    const wchar_t* szNotInvalidHandle = L"Creating: yes";
    const wchar_t* szOpenedMessage = L"file opened";

    HANDLE hWriteConsole = GetStdHandle(-11);

    HANDLE hFile = CreateFileW(
        szFileName, 
        GENERIC_ALL, 
        0, 
        NULL, 
        OPEN_EXISTING, 
        FILE_ATTRIBUTE_HIDDEN, 
        NULL
    );

    if (hFile == INVALID_HANDLE_VALUE) {

        WriteConsoleW(
            hWriteConsole,
            szMessageFNF,
            28,
            NULL,
            NULL
        );

        hFile = CreateFileW(
            szFileName, 
            GENERIC_ALL,
            0, 
            NULL, 
            OPEN_ALWAYS, 
            FILE_ATTRIBUTE_HIDDEN, 
            NULL
        );

        if (hFile == INVALID_HANDLE_VALUE) {

            WriteConsoleW(
                hWriteConsole,
                szInvalidHandle,
                13,
                NULL, 
                NULL
            );

            Sleep(5000);
            ExitProcess(1);
        }

        else if (hFile != INVALID_HANDLE_VALUE) {

            WriteConsoleW(
                hWriteConsole,
                szNotInvalidHandle,
                14,
                NULL,
                NULL
            );

            CloseHandle(hFile);

            Sleep(5000);
            ExitProcess(0);
        }
    } 
    
    else if (hFile != INVALID_HANDLE_VALUE) {

        WriteConsoleW(
            hWriteConsole,
            szOpenedMessage,
            12,
            NULL,
            NULL
        );

        CloseHandle(hFile);

        Sleep(5000);
        ExitProcess(0);

    }
    
}