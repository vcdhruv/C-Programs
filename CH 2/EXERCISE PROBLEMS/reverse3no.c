#include<stdio.h>
void main(){
    int n1,first_digit,middle_digit,last_digit;
    printf("enter value of three digit no.:");
    scanf("%d",&n1);
    first_digit = n1%10;
    middle_digit = (n1%100)/10;
    last_digit = n1/100;
    printf("reverse of three digit no. is:%d%d%d",first_digit,middle_digit,last_digit);
}