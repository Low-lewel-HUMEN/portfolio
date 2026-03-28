extern GetStdHandle
extern WriteConsoleW
extern ReadConsoleW
extern Sleep
extern ExitProcess

section .data
szMessage dw 'I', 'n', 'p', 'u', 't', ':', ' ', 0x0
stMessage equ 0x7

section .bss
sInput resw 128
dqInputSize resb 8

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
    xor r9, r9
    sub rsp, 0x10 ; for 5 argument
    mov qword [rsp+32], 0x0
    call WriteConsoleW
    add rsp, 0x30

    sub rsp, 0x20
    mov rcx, r11
    lea rdx, [rel sInput]
    mov r8d, 127  ; 127 wchars for string + 1 wchar for \0
    lea r9, [rel dqInputSize]
    sub rsp, 0x10
    mov qword [rsp+32], 0x0
    call ReadConsoleW
    add rsp, 0x30

    lea rax, [rel sInput]
    mov rcx, [rel dqInputSize]
    mul rcx, 0x2

    mov word [rax+rcx], 0x0

    sub rsp, 0x20
    mov rcx, r10
    lea rdx, [rel sInput]
    mov r8d, [rel dqInputSize]
    xor r9, r9
    sub rsp, 0x10
    mov qword [rsp+32], 0x0
    add rsp, 0x30

    sub rsp, 0x20
    mov rcx, 5000
    call Sleep

    xor rcx, rcx
    call ExitProcess