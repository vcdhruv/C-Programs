#include<stdio.h>
void main(){
    int a,b,sum;
    scanf("%d",&a,&b);  /* GARBAGE VALUE : IF A VARIABLEIS ASSIGNED BUT NOT ALLOCATED IN SOME PROGRAMMING LANGUAGES SUCH AS C ,
                             IT IS SAID TO HAVE A GARBAGE VALUE*/
    sum = a + b;
    printf("sum is : %d",sum);
}