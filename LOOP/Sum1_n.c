#include <stdio.h>
void main()
{
    float i, a, sum;

    i = 1;

    printf("enter the ending nuber:");
    scanf("%f", &a);

    while (i <= a)
    {
        i++;
    }
    sum = (a / 2) * (1+ a);
    printf("\n%f",sum);
}
