//WAP to compute the natural logarithm of a given number//
#include<stdio.h>
#include<math.h>
void main(){
    int x, i;
    float result=0;
    printf("\nEnter the value of x:");
    scanf("%d",&x);
    for(i=1;i<=7;i++)
    {
        if(i==1)
                result=result+pow((x-1.0)/x,i);
        else
                result=result+(1.0/2)*pow((x-1.0)/x,i);
    }
    printf("Log(%d) = %f",x,result);
}