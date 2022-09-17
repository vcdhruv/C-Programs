#include<stdio.h>
void main()
{
	int a,b,sum,sub,mult,div,ans;
	printf("Enter a=");
	scanf("%d",&a);
	printf("Enter b=");
	scanf("%d",&b);
	sum=a+b;
	sub=a-b;
	mult=a*b;
	div=a/b;
	printf("Enter what needed=");
	scanf("%d",&ans);
	if(ans==1)
	{
		printf("value=%d",sum);
	}
	if(ans==2)
	{
		printf("value=%d",sub);
	}
	if(ans==3)
	{
		printf("value=%d",mult);
	}
	if(ans==4)
	{
		printf("value=%d",div);
	}
}