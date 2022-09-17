#include<stdio.h>
#include<stdbool.h>     //for boolean values for while loop...
#include<stdlib.h>  //for exit method....
void main()
{
    int a,b;
    printf("enter value of a:");
    scanf("%d",&a);
    printf("enter value of b:");
    scanf("%d",&b);
    int c,l;
    do
    {
        printf("enter 1 to add\n");
        printf("enter 2 to subtract\n");
        printf("enter 3 for multiplication \n");
        printf("enter 4 for division \n");
        printf("enter your choice:");
        scanf("%d",&c);
        switch(c)
        {
            case 1: add(a,b);
            break;
            case 2: sub(a,b);
            break;
            case 3: mul(a,b);
            break;
            case 4: divi(a,b);
            break;
            default: printf("invalid input");
            break;
        }
        printf("\nenter 0 to exit from the menu :");
        scanf("%d",&l);
    }while(l!=0);
    
    
}
void add(int x,int y)
{
    int add = x + y;
    //return add;
    printf("ans=%d+%d\n",x,y);
    printf("addition is %d",add);
}
void sub(int x,int y)
{
    int sub;
    if(x>y)
    {
        sub = x-y;
        printf("\nans=%d-%d",x,y);
    }
    else if(y>x)
    {
        sub = y-x;
        printf("\nans=%d-%d",y,x);
    }
    else if(y==x)
    {
        sub = x - y;
        printf("\nans=%d-%d",x,y);
    }
    printf("\nsubtraction is %d",sub);
}
void mul(int x,int y)
{
    int mul;
    printf("%d * %d = %d",x,y,mul=x*y);
}
void divi(int x,int y)
{
    int div;
    if(y!=0)
    {
        div = x/y;
        printf("%d / %d = %d",x,y,div);
    }
}