#include<stdio.h>
void main()
{
    int n;
    printf("enter an integer number:");
    scanf("%d",&n);
    if(n<100)
    {
        printf("your number is smaller than 100");
    }
    else
    {
        printf("your number contains more than two digits");
    }
}