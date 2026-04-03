#include <windows.h>
#include "../headers/WriteLog.h"

//include structures
#include "../headers/structures/MainStruct.h"
#include "../headers/structures/DataStruct.h"
#include "../headers/structures/SettingStruct.h"

// function
BOOL WriteLog(wchar_t* lpLog, struct Main* lpMainStruct) {

    struct Data* lpDataStruct = lpMainStruct->lpDataStruct;
    struct Setting* lpSettingStruct = lpMainStruct->lpSettingStruct;
    DWORD dwFlags = lpSettingStruct->dwFlags;

    
}