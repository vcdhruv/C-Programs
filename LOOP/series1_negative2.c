#include<stdio.h>
void main()
{
	int i,a,sum=0;
	printf("Enter ending number=");
	scanf("%d",&a);
	i=1;
	while(i<=a)
	{
		if(i%2==0)
		{
			sum=sum-i;
		}
		else
		{
			sum=sum+i;
		}
		i++;
	}
	printf("Sum=%d",sum);
}