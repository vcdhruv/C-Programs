#include<stdio.h>
#define N 10    //there semicolon will not come
void main()
{
    int n,i=1,k;
    printf("enter desired table:");
    scanf("%d",&n);
    while(i<=N)
    {
        k=n*i;
        printf("%d*%d=%d\n",n,i,k);
        i++;
    }
}