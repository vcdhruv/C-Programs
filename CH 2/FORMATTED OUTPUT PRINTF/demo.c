#include<stdio.h>
void main(){
    int a;
    a = 1234;
    printf("%7d \n",a);
    printf("%-7d \n",a);
    printf("%07d \n",a);
    printf("%-07d \n \n \n \n",a);  //no zero will be printed after the number//
    float b;
    b = 1234.3456;
    printf("%010.2f \n",b);
    printf("%0-10.2f \n",b);   // no value also by giving 0 before - //
    printf("%05.2f \n",b);  // didn't get it //
    printf("%-5.2f",b);
}