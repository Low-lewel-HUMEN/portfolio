#include <windows.h>
#include "../headers/CreateLog.h"

//include structures
#include "../headers/structures/MainStruct.h"
#include "../headers/structures/DataStruct.h"
#include "../headers/structures/SettingStruct.h"

// include functions
#include "utils-headers/HeapAlloc_AllStructs.h"
#include "utils-headers/HeapAlloc_FileName.h"
#include "utils-headers/CopyFileNameInHeap.h"

struct Main* CreateLog(const wchar_t* lpFileName, const DWORD dwFlags) {

    HANDLE hHeap = 
    GetProcessHeap();

    struct Main* lpMainStruct = 
    HeapAlloc_AllStructs(hHeap);
    if (lpMainStruct == NULL) {
        return NULL; // NULL == fatal
    }

    struct Data* lpDataStruct = lpMainStruct->lpDataStruct;
    struct Setting* lpSettingStruct = lpMainStruct->lpSettingStruct;

    wchar_t* lpHeapForFileName = 
    HeapAlloc_FileName(hHeap, lpFileName);
    if (lpHeapForFileName == NULL) {
        HeapFree(hHeap, 0, lpMainStruct);
        HeapFree(hHeap, 0, lpDataStruct);
        HeapFree(hHeap, 0, lpSettingStruct);
        return NULL; // NULL == fatal
    }

    CopyFileNameInHeap(
        (wchar_t*)lpFileName, 
        (wchar_t*)lpHeapForFileName
    );

    // save setting
    lpMainStruct->lpSettingStruct->dwFlags = dwFlags;
    lpMainStruct->lpSettingStruct->lpFileName = lpHeapForFileName;

    return lpMainStruct;

}