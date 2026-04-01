#include <windows.h>

// function
void CheckPtrOnNull(void* lpPtr) {

    // if lp == nullptr
    if (lpPtr == NULL) {
        ExitProcess(1);
    }

    // if lp == not nullptr
    else {
        return;
    }
}