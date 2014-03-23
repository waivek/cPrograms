#include<stdio.h>
#include<math.h>
struct point{
    float x;
    float y;
};
float getDistance(struct point ,struct point );
float getSlope(struct point ,struct point );
main(){
    struct point p1,p2;
    printf("x1=");
    scanf("%f",&p1.x);
    fflush(stdin);
    printf("y1=");
    scanf("%f",&p1.y);
    fflush(stdin);
    printf("x2=");
    scanf("%f",&p2.x);
    fflush(stdin);
    printf("y2=");
    scanf("%f",&p2.y);
    fflush(stdin);
    printf("The distance is %.2f\n",getDistance(p1,p2));
    printf("The slope is %.2jf\n",getSlope(p1,p2));
}
float getSlope(struct point a,struct point b){
    float slope;
    slope=(a.y-b.y)/(a.x-b.x);
    return slope;
}
float getDistance(struct point a,struct point b){
    float distance;
    distance=pow(a.x-b.x,2)+pow(a.y-b.y,2);
    distance=sqrt(distance);
    return distance;
}
