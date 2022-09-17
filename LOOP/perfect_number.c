#include<stdio.h>
void main()
{
	int i,a,sum=0;
	printf("Enter a=");
	scanf("%d",&a);
	i=1;
	while(i<=a/2)
	{
		if(a%i==0)
		{
			printf("%d,",i);
			sum=sum+i;
		}
		i++;
	}
	if(sum==a)
	{
		printf("Number is perfect");
	}
	else
	{
		printf("Number is not perfect");
	}
}	