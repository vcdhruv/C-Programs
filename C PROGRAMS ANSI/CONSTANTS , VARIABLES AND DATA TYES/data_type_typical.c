#include<stdio.h>
void main()
{
    float x , p;
    double y , q;
    unsigned k; // if not specified it will consider int...
    int m = 54321;
    int g = 2147499949;
    long int n = 1234567890;
    x = 1.234567890000;
    y = 9.87654321;
    k = 54321;  //exceded range for 16 bit machine
    p = q = 1.0 ;//multiple assignments are aloowed
    printf("m = %d\n",m);   // for 16 bit it is exceeded
    printf("g = %d\n",g);   //exceeded limit
    printf("n = %d\n",n); 
    printf("n = %ld\n",n);
    printf("x = %.12lf\n",x);  
    printf("x = %f\n",x);   // unless specified printf will always display a float or double value to six decimal places.
    printf("y = %f\n",y); 
    printf("y = %lf\n",y); 
    printf("k = %u , p = %f , q = %.12lf\n",k,p,q); // unsigned always gives positiveand vlue also exceeds than signed
}