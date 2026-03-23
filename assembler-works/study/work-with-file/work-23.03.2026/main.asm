extern CreateFileW

section .data
szFileName dw 'l','o','g','g','e','r','.','l','o','g'

section .text
global fn_start
fn_start:
    sub rsp, 0x8

    sub rsp, 0x20
    mov rcx, 