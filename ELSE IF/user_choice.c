#include<stdio.h>
void main()
{
	float a,b,c;
	printf("Enter a=");
	scanf("%f",&a);
	printf("Enter b=");
	scanf("%f",&b);
	printf("\nEnter 1 for Addition");
	printf("\nEnter 1 for Subtraction");
	printf("\nEnter 1 for Multiplication");
	printf("\nEnter 1 for Division");
	printf("\nEnter c=");
	scanf("%f",&c);
	if(c==1)
	{
		c=a+b;
		printf("Value=%f",c);
	}
	else if(c==2)
	{
		c=a-b;
		printf("Value=%f",c);
	}
	else if(c==3)
	{
		c=a*b;
		printf("Value=%f",c);
	}
	else if(c==4)
	{
		c=a/b;
		printf("Value=%f",c);
	}
	else
	{
		printf("Enter value between 1 and 4");
	}
}