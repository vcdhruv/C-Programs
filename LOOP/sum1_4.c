#include<stdio.h>
void main()
{
	int i,a,sum=0;
	printf("Enter ending number=");
	scanf("%d",&a);
	i=1;
	while(i<=a)
	{
		sum=sum+(i*i);
		i++;
	}
	printf("Sum is=%d",sum);
}