#include<stdio.h>
void main()
{
	float p,r,t,SI;
	printf("Enter p=");
	scanf("%f",&p);
	printf("Enter r=");
	scanf("%f",&r);
	printf("Enter t=");
	scanf("%f",&t);
	SI=(p*r*t)/100;
	printf("Simple Interest=%f",SI);
}