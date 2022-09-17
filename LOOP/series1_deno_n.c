#include<stdio.h>
void main()
{
	float i,a,sum=0;
	printf("Enter ending number=");
	scanf("%f",&a);
	i=1;
	while(i<=a)
	{
		sum=sum+(1/i);
		i++;
	}
	printf("Sum=%f",sum);
}