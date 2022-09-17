#include<stdio.h>
void main()
{
	float i,a,avg,sum=0,n;
	printf("Enter a=");
	scanf("%f",&a);
	i=1;
	while(i<=a)
	{
		printf("Enter values=");
		scanf("%f",&n);
		sum=sum+n;
		avg=sum/a;
		i++;
	}
	printf("%f\n",sum);
	printf("%f\n",avg);

}