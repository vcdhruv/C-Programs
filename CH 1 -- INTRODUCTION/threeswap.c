#include<stdio.h>
void main(){
    int n1,n2,n3,temp;
    printf("enter n1:");
    scanf("%d",&n1);
    printf("enter n2:");
    scanf("%d",&n2);
    printf("enter n3:");
    scanf("%d",&n3);
    temp=n1;
    n1=n2;  //n1=n2
    n2=temp;
    temp=n3;
    n3=n1;  //n1=n3
    n1=temp;
    temp=n2;
    n2=n3;  //n2=n3
    n3=temp;
    printf("after swapping,n1=%d\n",n1);
    printf("after swapping,n2=%d\n",n2);
    printf("after swapping,n3=%d",n3);


}