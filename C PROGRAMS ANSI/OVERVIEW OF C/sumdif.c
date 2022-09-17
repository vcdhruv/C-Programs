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
        printf("enter 1 to add two numbers\n");
        printf("enter 2 to subtract two numbers\n");
        printf("enter 3 for both\n");
        printf("enter your choice:");
        scanf("%d",&c);
        switch(c)
        {
            case 1: add(a,b);
            break;
            case 2: sub(a,b);
            break;
            case 3: add(a,b);
                    sub(a,b);
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
    printf("ans is %d",add);
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
    printf("\nans is %d",sub);
}