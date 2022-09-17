#include<stdio.h>
void main()
{
	int x,ans=1;
	printf("Enter x=");
	scanf("%d",&x);
	while(x>=1)
	{
		ans=ans*x;
		x--;
	}
	printf("Answer is%d",ans);
}