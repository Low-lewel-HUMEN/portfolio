#pragma once

// import libs
#include <windows.h>

// import structures
#include "st/stLogMessageEx.h"
#include "st/stLogMessageEx2.h"
#include "st/stLogMessageExS.h"

// libs
__declspec(dllexport) struct stLogMessageEx*  GetLogMessageEx(wchar_t* lpFileName, DWORD FileAttributes);
__declspec(dllexport) struct stLogMessageEx2* GetLogMessageEx2(wchar_t* lpFileName, DWORD FileAttributes);

__declspec(dllexport) void LogMessage(const wchar_t* lpFileName, const wchar_t* lpLog);
__declspec(dllexport) void LogMessageEx(const wchar_t* lpLog, struct stLogMessageEx* lpStruct);
__declspec(dllexport) void LogMessageEx2(const wchar_t* lpLog, struct stLogMessageEx2* lpStruct);

__declspec(dllexport) void FreeLogMessageEx(struct stLogMessageEx* lpStruct);
__declspec(dllexport) void FreeLogMessageEx2(struct stLogMessageEx2* lpStruct);