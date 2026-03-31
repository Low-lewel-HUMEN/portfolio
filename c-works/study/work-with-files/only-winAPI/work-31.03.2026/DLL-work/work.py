import ctypes
import os

dll_path = os.path.abspath("log.dll")
log = ctypes.WinDLL(dll_path, winmode=0)

log.LogMessage.argtypes = [ctypes.c_wchar_p, ctypes.c_wchar_p]
log.LogMessage.restype = None

log.GetLogMessageEx2.argtypes = [ctypes.c_wchar_p, ctypes.c_ulong]
log.GetLogMessageEx2.restype = ctypes.c_void_p

log.LogMessageEx2.argtypes = [ctypes.c_wchar_p, ctypes.c_void_p]
log.LogMessageEx2.restype = None

log.FreeLogMessageEx2.argtypes = [ctypes.c_void_p]
log.FreeLogMessageEx2.restype = None

while True:
    Struct_1 = log.GetLogMessageEx2("logger-not-enter.log", 0x1)
    log.FreeLogMessageEx2(Struct_1)