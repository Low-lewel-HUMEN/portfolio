// typedef <windows.h>
typedef unsigned long DWORD;

// typedef structures
typedef struct Main MainStruct;

__declspec(dllexport) struct Main* CreateLog(const wchar_t* lpFileName, const DWORD dwFlags);