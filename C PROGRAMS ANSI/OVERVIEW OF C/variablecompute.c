#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter value of a:");
    scanf("%d",&a);
    printf("enter value of b:");
    scanf("%d",&b);
    printf("enter value of c:");
    scanf("%d",&c);
    if(b==c)
    {
        printf("x=%d/0\n",a);
        printf("invalid expression values");
    }
    int x = a/(b-c);
    printf("expression:%d/(%d-%d)\n",a,b,c);
    printf("ans:%d",x);
}