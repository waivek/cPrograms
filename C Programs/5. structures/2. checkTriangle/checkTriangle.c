#include<stdio.h>
#include<math.h>
struct point{
    float x;
    float y;
};
float getDistance(struct point ,struct point );
main(){
    struct point p1,p2,p3;
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
    printf("x3=");
    scanf("%f",&p3.x);
    fflush(stdin);
    printf("y3=");
    scanf("%f",&p3.y);
    fflush(stdin);
    float a,b,c;
    a=getDistance(p1,p2);
    b=getDistance(p2,p3);
    c=getDistance(p3,p1);
    if((a==b)&&(b==c)){
        printf("Equilateral.");
    }
    else if((a==b)||(b==c)||(c==a)){
        printf("Isosceles.");
    }
    else{
        printf("Scalene.");
    }
}
float getDistance(struct point a,struct point b){
    float distance;
    distance=pow(a.x-b.x,2)+pow(a.y-b.y,2);
    distance=sqrt(distance);
    return distance;
}
