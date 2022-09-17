#include <stdio.h>
void main()
{
	int i,a;

	i=1;

	printf("enter the ending nuber:");
	scanf("%d",&a);

	while(i<=a)
		{
			printf("%d\n",i);

			i=i+2;
		}
}