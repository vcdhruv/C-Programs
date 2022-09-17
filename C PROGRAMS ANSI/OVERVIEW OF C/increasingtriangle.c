#include<stdio.h>
void main()
{
    int n,i,j;
    printf("enter number of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j>0;j--)
        {
            printf("* ");
        }
        printf("\n");
    }
}