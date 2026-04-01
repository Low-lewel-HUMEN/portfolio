Задачи

1. Создать HeapAlloc_FileName.h
2. Создать HeapAlloc_FileName.c

(принимает): 
указатель на FileName (wchar_t*)

(делает): 
узнает размер строки через lstrlenW(FileName)   # and save
выделяет HeapAlloc в размер lstrlenW + 2 символа ()