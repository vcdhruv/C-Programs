#include<stdio.h>
void main()
{
    float a,b,div;
    printf("enter a:");
    scanf("%f",&a);
    printf("enter b:");
    scanf("%f",&b);
    if(a>b)
    {
        div = a / b;
        printf("%f / %f = %f",a,b,div);
    }
    else
    {
        div = b / a;
        printf("%f / %f = %f",b,a,div);
    }

}