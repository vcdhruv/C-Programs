#include<stdio.h>
void main(){
    int i,a,b,c,n;
    printf("enter n:");
    scanf("%d",&n);
    a=0;
    b=1;
    for(i=1;i<n;i++){
        printf("%d",a);
        c=a+b;
        a=b;
        b=c;
    }
}