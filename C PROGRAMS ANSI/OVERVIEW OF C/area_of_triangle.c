#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c;
    printf("enter value of a:");
    scanf("%d",&a);
    printf("enter value of b:");
    scanf("%d",&b);
    printf("enter value of c:");
    scanf("%d",&c);
    int d=areaoftriangle(a,b,c);
    printf("area of triangle of %d , %d , %d is %d",a,b,c,d);
}
int areaoftriangle(int x , int y , int z)
{
    int s,area; 
    s = (x + y + z)/2;
    area = sqrt(s * (s-x) * (s-y) * (s-z));
    //printf("area is:%d\n",area);
    //area = area * area;
    return area;
}