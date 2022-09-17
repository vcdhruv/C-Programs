

//short circuit in case of &&
/* IF THERE IS A CONDITION ANYWHERE IN THE EXPRESSION THAT RETURNS // FALSE // , THEN
THE REST OF TTHE CONDITIONS AFTER THAT WILL // NOT BE EVALUATED.// */

#include<stdio.h>
void main(){
    int a=5,b=3;
    int incr;
    incr=(a>b) && (b++);                // here if (a<b) then (b++) would not have been evaluated.....
    printf("%d\n%d",incr,b);
}