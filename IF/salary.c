#include<stdio.h>
void main()
{
	float BS,GS,HRA,DA;
	printf("Enter Basic Salary=");
	scanf("%f",&BS);
	if(BS<10000.0)
	{
		printf("Enter salary more than 10000");
	}
	if(BS>=10000.0)
	{
		HRA=0.2*BS;
		DA=0.8*BS;
	}
	if(BS>=20000.0)
	{
		HRA=0.25*BS;
		DA=0.9*BS;
	}
	if(BS>=30000.0)
	{
		HRA=0.3*BS;
		DA=0.95*BS;
	}
	GS=BS+HRA+DA;
	printf("Gross Salary=%f",GS);
}