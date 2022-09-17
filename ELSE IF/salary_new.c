#include<stdio.h>
void main()
{
	float BS,GS,HRA,DA;
	printf("Enter BS=");
	scanf("%f",&BS);
	if(BS>=10000 && BS<20000)
	{
		HRA=0.2*BS;
		DA=0.8*BS;
		GS=BS+HRA+DA;
		printf("Gross Salary=%f",GS);
	}
	else if(BS>=20000 && BS<30000)
	{
		HRA=0.25*BS;
		DA=0.9*BS;
		GS=BS+HRA+DA;
		printf("Gross Salary=%f",GS);
	}
	else if(BS>=30000.0)
	{
		HRA=0.3*BS;
		DA=0.95*BS;
		GS=BS+HRA+DA;
		printf("Gross Salary=%f",GS);
	}
	else
	{
		printf("Enter value greater than 10000");
	}
}