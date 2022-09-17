#include<stdio.h>
void main(){
    int n,lower_r,upper_r;
    printf("enter value of number:");
    scanf("%d",&n);
    lower_r = n/10*10;
    upper_r = lower_r + 10;
    printf("range is %d-%d",lower_r,upper_r);
}