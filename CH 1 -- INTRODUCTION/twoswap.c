#include<stdio.h>
void main(){
    int n1,n2,temp;
    printf("enter n1:");
    scanf("%d",&n1);
    printf("enter n2:");
    scanf("%d",&n2);
    // assigning value of n1 in temp variable
    temp = n1;
    // assigning value of n2 in n1
    n1 = n2;
    // assigning value of temp in n2
    n2 = temp;
    printf("after swapping,n1=%d\n",n1);
    printf("after swapping,n2=%d",n2);
}