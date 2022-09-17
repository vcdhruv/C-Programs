#include<stdio.h>
void main()
{
    int radius;
    printf("enter radius of circle:");
    scanf("%d",&radius);
    printf("perimeter of circle:%d\n",perimeter_of_circle(radius));
    printf("area of circle:%d",area_of_circle(radius));
}
int perimeter_of_circle(int x)
{
    return 2*3.14*x;
}
int area_of_circle(int x)
{
    return 3.14*x*x;
}