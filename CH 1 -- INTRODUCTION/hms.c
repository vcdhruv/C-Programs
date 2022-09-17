#include<stdio.h>
void main(){
    int sec,h,m,s;
    printf("enter desired sec:");
    scanf("%d",&sec);
    h=sec/3600;
    m=(sec-(3600*h))/60;
    s=(sec-(3600*h)-(60*m));
    printf("h:m:s-%d:%d:%d",h,m,s);
}