#include<stdio.h>
void main(){
    int first_no,last_no,n,sum;
    printf("enter four digits number:");
    scanf("%d",&n);
    first_no=n/1000;
    last_no=n%10;
    sum = first_no + last_no;
    printf(" sum is %d",sum);
}