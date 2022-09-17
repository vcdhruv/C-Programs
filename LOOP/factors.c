#include<stdio.h>
void main()
{
	int i,a;
	printf("Enter a=");
	scanf("%d",&a);
	i=1;
	while(i<=a/2)
	{
		if(a%i==0)
		{
			printf("%d,",i);
		}
		i++;
	}
}