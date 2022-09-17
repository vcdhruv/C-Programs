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
	(a>b)?(c=a*c):(c=b*c);
	printf("new value of c=%d",c);
}