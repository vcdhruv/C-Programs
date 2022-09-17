#include<stdio.h>
#include<math.h>
void main()
{
    int x1,x2,y1,y2,distance;
    printf("x1:");
    scanf("%d",&x1);
    printf("y1:");
    scanf("%d",&y1);
    printf("(x1,y1)=(%d,%d)\n",x1,y1);
    printf("x2:");
    scanf("%d",&x2);
    printf("y2:");
    scanf("%d",&y2);
    printf("(x2,y2)=(%d,%d)\n",x2,y2);
    distance = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    /*distance = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
    distance = sqrt(distance);*/
    printf("distance between (%d,%d) and (%d,%d) is:%d",x1,y1,x2,y2,distance);
}