#include<stdio.h>
void maim(){
    int n1,n2,n3;
    printf("enter n1:");
    scanf("%d",&n1);
    printf("enter n2:");
    scanf("%d",&n2);
    printf("enter n3:");
    scanf("%d",&n3);

    //n1=n2
    n1=(n1-n2)-n3;
    n2=n1+n2+n3;
    //n3=n1
    n3=(n2-n2)-n3;
    //n2=n3
    n2=(n2-n2)-n3;

    printf("after swapping,n1=%d\n",n1);
    printf("after swapping,n2=%d\n",n2);
    printf("after swapping,n3=%d",n3);

}