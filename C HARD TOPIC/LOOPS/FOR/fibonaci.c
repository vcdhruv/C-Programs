#include<stdio.h>
void main(){
    int prev,next,cnt,sum,n;
    printf("entr n:");
    scanf("%d",&n);
    prev=0;
    next=cnt=1;
    while(cnt<=n){
        printf("%d",next);
        sum=prev+next;
        prev=next;
        next=sum;
        cnt++;
    }
    printf("/b");
}