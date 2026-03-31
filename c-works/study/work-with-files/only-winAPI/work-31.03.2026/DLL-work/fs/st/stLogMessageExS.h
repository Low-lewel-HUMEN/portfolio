#pragma once
#include <windows.h>

typedef struct stLogMessageExS {

    HANDLE hHeap;
    DWORD nSizeFileName;
    wchar_t* lpFileNameHeap;

} stLogMessageExS;