extern GetStdHandle

section .data
szMessage dw 'I', 'n', 'p', 'u', 't', ':', ' ', 0x0
stMessage equ 0x7

section .bss

section .text
global fn_start
fn_start:
    sub rsp, 0x8

    sub rsp, 0x20
    mov rcx, -11
    call GetStdHandle
    add rsp, 0x20

    mov r10, rax       ; r10 = hWriteConsole

    sub rsp, 0x20
    mov rcx, -10
    call GetStdHandle
    add rsp, 0x20

    mov r11, rax       ; r11 = hReadConsole

    sub rsp, 0x20
    mov rcx, r10
    lea rdx, [rel szMessage]
    mov r8d, stMessage
    mov r9