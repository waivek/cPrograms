#include<stdio.h>
#include<math.h>
struct point{
    int x;
    int y;
};
main(){
    struct point p1,p2;
    printf("x1=");
    scanf("%d",&p1.x);
    fflush(stdin);
    printf("y1=");
    scanf("%d",&p1.y);
    fflush(stdin);
    printf("x2=");
    scanf("%d",&p2.x);
    fflush(stdin);
    printf("y2=");
    scanf("%d",&p2.y);
    fflush(stdin);
    float distance;
    distance=pow(p2.x-p1.x,2)+pow(p2.y-p1.y,2);
    distance=sqrt(distance);
    printf("Distance = %.2f",distance);
}

