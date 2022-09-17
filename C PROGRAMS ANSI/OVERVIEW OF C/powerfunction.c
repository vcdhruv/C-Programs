#include<stdio.h>
void main()
{
	int x,y,a,ans=1;
	printf("Enter x=");
	scanf("%d",&x);
	printf("Enter y=");
	scanf("%d",&y);
	a=1;
	while(a<=y)
	{
		ans=ans*x;
		a++;
	}
	printf("answer=%d",ans);
}