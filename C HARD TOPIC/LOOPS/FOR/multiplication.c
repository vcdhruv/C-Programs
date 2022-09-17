#include<stdio.h>
void main(){
    int i,j,n;
    printf("enter value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("%3d",i*j);
        }
        printf("\n");
    }
}