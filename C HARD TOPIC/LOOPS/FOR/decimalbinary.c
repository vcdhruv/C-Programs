//Convert decimal no. to its binary equivalent//
#include<stdio.h>
void main()
{
int n,i,a,r;
printf("enter the no.: ");
scanf("%d",&n);
for(i=15;i>=0;i--)
    {
        a=1<<i;
        r=n&a;
            if(r==0)
                        printf("0");
            else
                        printf("1");
    }
}
