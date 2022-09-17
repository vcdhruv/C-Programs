#include<stdio.h>
void main(){
    int n1,n2,rem;
    printf("enter n1:");
    scanf("%d",&n1);
    printf("enter n2:");
    scanf("%d",&n2);

    // for remainder without modular: f(x)-g(x)*q(x) where q(x)=n1/n2 f(x)=n1 g(x)=n2

    rem=(n1-(n2*(n1/n2)));
    printf("remainder is:%d",rem);
}