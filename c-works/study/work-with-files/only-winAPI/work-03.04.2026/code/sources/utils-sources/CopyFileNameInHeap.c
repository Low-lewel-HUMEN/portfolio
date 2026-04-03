#include <windows.h>
#include "../utils-headers/CopyFileNameInHeap.h"

// function
void CopyFileNameInHeap(wchar_t* lpFileName, wchar_t* lpHeapForFileName) {

    DWORD nSize = lstrlenW(lpFileName);
    for (DWORD count = 0; count < nSize; count++) {
        lpHeapForFileName[count] = lpFileName[count];
    }

    lpHeapForFileName[nSize] = L'\0';

    return;

}