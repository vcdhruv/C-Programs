#include<stdio.h>
void main(){
    int i=3,j=2,k=0,m;
    m = ++i && ++j || ++k;          // in these step ++i=3,++j=2 and ++k=0  short circuit method of both operator will be used..
    printf("%d %d %d %d",i,j,k,m);
}
