#include<stdio.h>
void main(){
    int a=1,b=5,c,d;
    c=((a==1)&&(b!=5));
    d=((a>0)||(b==5));
    printf("%d %d",c,d);
}