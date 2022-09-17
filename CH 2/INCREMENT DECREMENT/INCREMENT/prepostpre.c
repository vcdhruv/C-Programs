#include<stdio.h>
void main(){
    int a=1,b;
    b=++a + a++ + ++a;
    printf("%d\n%d",a,b);
}