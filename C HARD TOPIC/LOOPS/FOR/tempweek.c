// Write a program that gets temperatures of week days and calculate average temperature FOR that week.//

#include<stdio.h>
void main(){
    int i=0;
    float num=0,sum=0,avg=0; 
    for(i=0;i<7;i++){
        printf("enter temperature:");
        scanf("%f",&num);
        sum = sum + num;
    }
    avg = sum/7;
    printf("\naverage=%f\n",avg);
}