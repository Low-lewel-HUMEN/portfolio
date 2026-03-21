extern GetStdHandle
extern WriteConsoleW
extern Sleep
extern ExitProcess

section .data
szMessage dw 'H', 'e', 'l', 'l', 0x0
bSizeMessage equ 0x4

section .text
global fn_start
fn_start:
    sub rsp, 0x8

    mov rcx, -11
    call GetStdHandle
    mov r10, rax

    sub rsp, 0x20
    mov rcx, r10
    lea rdx, [rel szMessage]
    mov r8d, bSizeMessage
    xor r9d, r9d
    sub rsp, 0x10
    mov qword [rsp + 32], 0x0
    call WriteConsoleW
    add rsp, 0x30

    sub rsp, 0x20
    mov rcx, 5000
    call Sleep

    xor rcx, rcx
    call ExitProcess