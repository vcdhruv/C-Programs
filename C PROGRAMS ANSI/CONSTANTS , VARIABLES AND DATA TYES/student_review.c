#include<stdio.h>
void main()
{
    int marks,age;
    char name;
    printf("enter student name:");
    scanf("%s",&name);
    printf("enter total marks out of 100:");
    scanf("%d",&marks);
    printf("average marks of is:%d\n",marks/7);
    printf("enter age:");
    scanf("%d",&age);
}