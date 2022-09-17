#include <stdio.h>
void main()
{

	int i,a;

	printf("Enter starting velue:");
	scanf("%d",&i);

	printf("enter the ending nuber:");
	scanf("%d",&a);

	i=i;

	while(i<=a)
	{
		if (i%2==0 && i%3!=0)
		{
			printf("%d\n",i);
		}
		i++;
	}
}