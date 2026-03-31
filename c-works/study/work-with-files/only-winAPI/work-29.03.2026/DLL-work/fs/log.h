#pragma once

// import libs
#include <windows.h>

// import structures
#include "st/stLogMessageEx.h"

// libs
__declspec(dllexport) void LogMessage(const wchar_t* lpFileName, const wchar_t* lpLog);
__declspec(dllexport) struct stLogMessageEx* GetLogMessageEx(wchar_t* lpFileName, DWORD FileAttributes);
__declspec(dllexport) void LogMessageEx(const wchar_t* lpLog, struct stLogMessageEx* lpStruct);
__declspec(dllexport) void FreeLogMessageEx(struct stLogMessageEx* lpStruct);