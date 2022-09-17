#include<stdio.h>
void main()
{
	float a,b,c;
	printf("Enter a=");
	scanf("%f",&a);
	printf("Enter b=");
	scanf("%f",&b);
	printf("Enter c=");
	scanf("%f",&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("a is largest number");
		}
		else
		{
			printf("c is largest number");
		}
	}
	else if(b>c)
	{
		printf("b is the largest number");
	}
	else
	{
		printf("c is the largest number");
	}
}