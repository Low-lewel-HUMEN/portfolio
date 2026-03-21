extern GetStdHandle
extern WriteConsoleW
extern Sleep
extern ExitProcess

; rsp = 0x00008 (fn_start)
; call = 24 (%16)

; 0x8  = 8   |
; 0x10 = 16  | %16
; 0x18 = 24  |
; 0x20 = 32  | %16
; 0x28 = 40  |
; 0x30 = 48  | %16
; r10 = hWriteConsole

section .data
szMessage dw 'H', 'e', 'l', 'l', 0x0
bSizeMessage equ 0x4

section .text
global fn_start
fn_start:
    sub rsp, 0x8      ; %16
    sub rsp, 0x20     ; shadow 

    mov rcx, -11
    call GetStdHandle
    mov r10, rax

    mov rcx, r10
    lea rdx, [rel szMessage]
    mov r8d, bSizeMessage
    xor r9d, r9d
    mov qword [rsp + 32], 0x0
    call WriteConsoleW

    mov rcx, 5000
    call Sleep

    xor rcx, rcx
    call ExitProcess