#include <stdio.h>
void main()
{
	int a;
	
	printf("Enter Month number=");
	scanf("%d",&a);

	switch(a)
		{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				printf("There is 31 days in month\n");
			break;

			case 2:
				printf("There is 28/29 days in month\n");
			break;

			case 4:
			case 6:
			case 9:
			case 11:
				printf("There is 30 days in month\n");
			break;
		}

}