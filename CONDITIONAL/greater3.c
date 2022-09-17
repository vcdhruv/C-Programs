#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter a=");
	scanf("%d",&a);
	printf("Enter b=");
	scanf("%d",&b);
	printf("Enter c=");
	scanf("%d",&c);
	(a>b)?((a>c)?(printf("a is largest number")):(printf("c is largest number"))):((b>c)?(printf("b is largest number")):(printf("c is largest number")));
}