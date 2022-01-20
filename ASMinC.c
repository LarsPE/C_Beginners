// assembler code in c
#include<stdio.h>

void main(){
  int a = 10;
  int b = 20;
  int c;

  asm{
    mov ax,a
    mov bx,b
    add ax,bx
    mov c,ax
  }
  printf("c = %d\n", c);

  return 0;
}

// do not compile with gcc version 11.1.0 on Manjaro linux
