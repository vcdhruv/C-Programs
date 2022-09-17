#include<stdio.h>
void main(){
    int n1,n2;
    printf("enter n1:");
    scanf("%d",&n1);
    printf("enter n2:");
    scanf("%d,&n2");
    n1=n1-n2;
    n2=(n1-n2)+n1;
    n1=((n1-n2)+n1)+n1;
    printf("after swapping,n1=%d\n",n1);
    printf("after swapping,n2=%d",n2);
}