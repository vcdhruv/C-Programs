#include<stdio.h>
void main(){
    int n1,first_digit,middle_digit,last_digit,sum;
    printf("enter three digit no.:");
    scanf("%d",&n1);
    first_digit = n1/100;
    middle_digit = (n1%100)/10;
    last_digit = n1%10;
    sum = first_digit + middle_digit + last_digit;
    printf("sum of three no. of a three digit no. is:%d",sum);
}