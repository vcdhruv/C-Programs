#include<stdio.h>
void main(){
    int i,j,b,n;    //b = preceding no.//
    printf("enter value of n:");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        b=1;
        for(j=0;j<=i;j++){
            if(i==0||j==0){
                printf("%d",b);
            }
            else{
                b=b*((i-j)+1)/j;
                printf("%d",b);
            }
        }
        printf("\n");
    }
}