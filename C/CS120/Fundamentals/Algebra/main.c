int main(void)
{
    /* Compiler generated assembly output:

    _TEXT SEGMENT
    a$ = 4
    b$ = 36
    c$ = 68
    d$ = 100
    e$ = 132

    ; 1 : int a = 1;
    mov  DWORD PTR a$[rbp], 1

    ; 2 : int b = 2;
    mov  DWORD PTR b$[rbp], 2

    ; 3 : int c = 3;
    mov  DWORD PTR c$[rbp], 3

    ; 4 : int d = 4;
    mov  DWORD PTR d$[rbp], 4

    ; 5 : int e = a * b * (c + d);
    mov  eax, DWORD PTR a$[rbp]
    imul  eax, DWORD PTR b$[rbp]
    mov  ecx, DWORD PTR d$[rbp]
    mov  edx, DWORD PTR c$[rbp]
    add  edx, ecx
    mov  ecx, edx
    imul  eax, ecx
    mov  DWORD PTR e$[rbp], eax

    ; 6 : return 0;
    xor  eax, eax  (xor is faster to 0 out register)
    lea	 rsp, QWORD PTR [rbp+360]
    pop	 rdi
    pop	 rbp
    ret	 0 */

    int a = 1;
    int b = 2;
    int c = 3;
    int d = 4;
    int e = a * b * (c + d);

    return 0;
}