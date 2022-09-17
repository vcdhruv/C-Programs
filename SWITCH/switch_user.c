#include<stdio.h>
void main()
{
	int a,b,d;
	char c;
	printf("\nEnter addition for Addition");
	printf("\nEnter subtraction for Subtraction");
	printf("\nEnter multiplication for Multiplication");
	printf("\nEnter division for Division");
	printf("\nEnter c=");
	scanf("%c",&c);
	printf("Enter a=");
	scanf("%d",&a);
	printf("Enter b=");
	scanf("%d",&b);
	switch(c)
	{
		case '+':
			d=a+b;
			printf("Value of d=%d",d);
			break;
		case '-':
			d=a-b;
			printf("Value of d=%d",d);
		case '*':
			d=a*b;
			printf("Value of d=%d",d);
		case '/':
			d=a/b;
			printf("Value of d=%d",d);
		default:
			printf("Enter valid choice");
	}

}