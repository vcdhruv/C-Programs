#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,D,R1,R2,I1,I2;
	printf("Enter a=");
	scanf("%f",&a);
	printf("Enter b=");
	scanf("%f",&b);
	printf("Enter c=");
	scanf("%f",&c);
	D=(b*b)-4.0*a*c;
	if(D>0)
	{
		R1=(-b+sqrt(D))/2.0*a;
		R2=(-b-sqrt(D))/2.0*a;
		printf("First Root=%f",R1);
		printf("\nSecond Root=%f",R2);
	}
	else if(D==0)
	{
		R1=(-b)/2.0*a;
		R2=R1;
		printf("First Root=%f",R1);
		printf("\nSecond Root=%f",R2);
	}
	else
	{
		I1=(-b)/(2.0*a);
		I2=(sqrt(-D))/(2.0*a);
	}
	printf("First Roots=%f",I1);
	printf("-");
	printf("%f",I2);printf("i");
	printf("\nSecond Roots=%f",I1);printf("+");printf("%f",I2);printf("i");

}