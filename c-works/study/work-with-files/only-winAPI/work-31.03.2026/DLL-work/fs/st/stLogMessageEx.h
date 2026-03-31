#pragma once
#include <windows.h>

typedef struct stLogMessageEx {

    wchar_t* lpFileName;
    DWORD FileAttributes;
    HANDLE hHeap;

} stLogMessageEx;