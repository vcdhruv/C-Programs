#include<stdio.h>
void main()
{
	int a,i1,i2;
	printf("Enter a=");
	scanf("%d",&a);
	i1=a;
	while(i1>=10)
	{
		i1=i1/10;
	}
	i2=a%10;
	printf("Sum is=%d",i1+i2);
}