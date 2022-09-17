#include<stdio.h>
void main(){
    int basic_salary,hra,da,gross_salary;
    printf("enter basic salary of Mr. Harish :");
    scanf("%d",&basic_salary);
    hra = ((basic_salary)*20)/100;
    da = ((basic_salary)*40)/100;
    gross_salary = basic_salary + hra + da;
    printf("gross salary of Mr. Harish is:%d",gross_salary);
}