#include <windows.h>
#include "../headers/CreateLog.h"

//include structures
#include "../headers/structures/MainStruct.h"
#include "../headers/structures/DataStruct.h"
#include "../headers/structures/SettingStruct.h"

// include functions
#include "utils-headers/CheckPtrOnNull.h"
#include "utils-headers/HeapAlloc_MainStruct.h"
#include "utils-headers/HeapAlloc_DataStruct.h"
#include "utils-headers/HeapAlloc_SettingStruct.h"

struct Main* CreateLog(const wchar_t* lpFileName, const DWORD dwFlags) {

    HANDLE hHeap = 
    GetProcessHeap();

    struct Main* lpMainStruct = 
    HeapAlloc_MainStruct(hHeap);
    CheckPtrOnNull(lpMainStruct);

    struct Data* lpDataStruct =
    HeapAlloc_DataStruct(hHeap);
    CheckPtrOnNull(lpDataStruct);

    struct Setting* lpSettingStruct =
    HeapAlloc_SettingStruct(hHeap);
    CheckPtrOnNull(lpSettingStruct);

    // save structures
    lpMainStruct->lpDataStruct = lpDataStruct;
    lpMainStruct->lpSettingStruct = lpSettingStruct;

    // save setting
    lpMainStruct->lpSettingStruct->dwFlags = dwFlags;

    return lpMainStruct;

}