#include <stdio.h>

int top=0,s[50];

void push(int x)
{
	if(top>=x)
	{
		printf("Stack Overflow\n");
		return;
	}

	top++;
	s[top]=x;
	return;
}

int pop()
{
	if(top<0)
	{
		printf("Stack Underflow Onb Pop");
		return 0;
	}
	top--;
	return (s[top+1]);
}