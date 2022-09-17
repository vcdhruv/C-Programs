//To print the sum of 9+99+999+............... n terms.//
#include<stdio.h>
void main(){
    int n,sum=0,i,term;
    printf("enter value of n:");
    scanf("%d",&n);
    for(i=1,term=9;i<=n;i++){
        sum = sum + term;
        term = (term*10) + 9;
    }
    printf("sum = %d",sum);
}