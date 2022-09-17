#include<stdio.h>
void main(){
    int x=20,y=30,z=5,m;
    m=x<y<z;
    // use law of associativity
    // first x<y so answer is 1
    //now , 1<z so answer is 1
    // hence , final answer is true
    printf("%d",m);
}