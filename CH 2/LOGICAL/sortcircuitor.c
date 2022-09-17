// short circuit in case of || :

/* IF THERE IS A CONDITION ANYWHERE IN THE EXPRESSION THAT RETURNS // TRUE // , THEN
THE REST OF TTHE CONDITIONS AFTER THAT WILL // NOT BE EVALUATED.// */

#include<stdio.h>
void main(){
    int a=5,b=3;
    int incr;
    incr=(a>b) || (b++);            //(b++) will not be evaluated....
    printf("%d\n%d",incr,b);
}