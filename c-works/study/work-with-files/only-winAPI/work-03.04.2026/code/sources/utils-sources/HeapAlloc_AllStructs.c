#include <windows.h>
#include "../utils-headers/HeapAlloc_AllStructs.h"

//include structures
#include "../../headers/structures/MainStruct.h"
#include "../../headers/structures/DataStruct.h"
#include "../../headers/structures/SettingStruct.h"

// include functions
#include "../utils-headers/HeapAlloc_MainStruct.h"
#include "../utils-headers/HeapAlloc_DataStruct.h"
#include "../utils-headers/HeapAlloc_SettingStruct.h"

struct Main* HeapAlloc_AllStructs(HANDLE hHeap) {

    struct Main* lpMainStruct = 
    HeapAlloc_MainStruct(hHeap);
    if (lpMainStruct == NULL) {
        return NULL;
    }

    struct Data* lpDataStruct =
    HeapAlloc_DataStruct(hHeap);
    if (lpDataStruct == NULL) {
        HeapFree(hHeap, 0, lpMainStruct);
        return NULL;
    }

    struct Setting* lpSettingStruct =
    HeapAlloc_SettingStruct(hHeap);
    if (lpSettingStruct == NULL) {
        HeapFree(hHeap, 0, lpMainStruct);
        HeapFree(hHeap, 0, lpDataStruct);
        return NULL;
    }

    lpMainStruct->lpDataStruct = lpDataStruct;
    lpMainStruct->lpSettingStruct = lpSettingStruct;

    return lpMainStruct;
}