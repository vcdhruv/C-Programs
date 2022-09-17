#include<stdio.h>
void main(){
    char ch;
    printf("Enter a character:");
    ch = getchar();
    putchar(ch);
    putchar('\n');
    putchar('k');
    getch();
}