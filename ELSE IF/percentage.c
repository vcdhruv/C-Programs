#include<stdio.h>
void main()
{
	float m,p,c,h,e,per;
	printf("Enter maths marks=");
	scanf("%f",&m);
	printf("Enter physics marks=");
	scanf("%f",&p);
	printf("Enter c language marks=");
	scanf("%f",&c);
	printf("Enter html marks=");
	scanf("%f",&h);
	printf("Enter english marks=");
	scanf("%f",&e);
	per=((m+p+c+h+e)/5.0);
	if(per<35.0)
	{
		printf("You are fail");
	}
	else if(35.0<per && per<45.0)
	{
		printf("You are pass");
	}
	else if(45.0<per && per<60.0)
	{
		printf("You are in secod class");
	}
	else if(60.0<per && per<70.0)
	{
		printf("You are in first class");
	}
	else
	{
		printf("You had cleared with distiction");
	}
}