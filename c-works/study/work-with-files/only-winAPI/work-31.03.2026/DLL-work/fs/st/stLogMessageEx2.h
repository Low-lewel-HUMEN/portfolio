#pragma once
#include <windows.h>

typedef struct stLogMessageEx2 {

    wchar_t* lpFileName;
    DWORD FileAttributes;
    void* ExSystem;

} stLogMessageEx2;