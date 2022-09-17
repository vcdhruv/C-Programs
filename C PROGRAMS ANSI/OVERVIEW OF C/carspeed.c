#include<stdio.h>
void main()
{
    int dist,time;
    printf("enter distance travelled by car:");
    scanf("%d",&dist);
    printf("enter time taken by car to reach %dkm in minute:",dist);
    scanf("%d",&time);
    int speed = dist/time;
    printf("%dkm/h is the speed of car",speed);
}
