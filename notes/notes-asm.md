# Struct
* 
* [entry call WinAPI](#entry-algoritm)
* [not entry call WinAPI](#not-entry-algoritm)
* [sub rsp](#sub-rsp)

#
### Entry algoritm
**call WinAPI 4 arg** with shadow:
* 0x8  ( 8 bytes) | 0x0008 entry, +0x08 = 0x0010 (%16)
* 0x20 (32 bytes) | shadow for 4 arg

**call WinAPI 5-6 arg** with shadow:
* 0x8  ( 8 bytes) | 0x0008 entry, +0x08 = 0x0010 (%16)
* 0x30 (48 bytes) | shadow for 6 arg

#
### Not entry algoritm
* if (stack !% 16) 0x08
* if (stack %% 16) continue
* **-------------------------**
* if (arg = 4) 0x20
* if (arg = 5) 0x30
* if (arg = 6) 0x30

#
### sub rsp
; 0x8  = 8   |
; 0x10 = 16  | %16  
; 0x18 = 24  |  
; 0x20 = 32  | %16  
; 0x28 = 40  |  
; 0x30 = 48  | %16  