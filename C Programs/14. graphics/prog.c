#include<stdio.h>
#include"graphics.c"

void sierpinski(int ,int ,int ,int ,int ,int ,int );

main(){
    /*
    int d=0;
    int x1=0,y1=0,x2=0,y2=0,x3=0,y3=0;
    printf("Depth ");
    scanf("%d",&d);

    printf("x1 ");
    scanf("%d",&x1);
    printf("y1 ");
    scanf("%d",&y1);

    printf("x2 ");
    scanf("%d",&x2);
    printf("y2 ");
    scanf("%d",&y2);

    printf("x3 ");
    scanf("%d",&x3);
    printf("y3 ");
    scanf("%d",&y3);
    */
    openGraphics();
    sierpinski(300,100,100,300,500,300,10);
    closeGraphics();
    getch();
}

void sierpinski(int x1,int y1,int x2,int y2,int x3,int y3,int d){
    if(d>0){

        drawTriangle(x1,y1,x2,y2,x3,y3,yellow);

        int midx12=(x1+x2)/2;
        int midy12=(y1+y2)/2;

        int midx23=(x2+x3)/2;
        int midy23=(y2+y3)/2;

        int midx31=(x3+x1)/2;
        int midy31=(y3+y1)/2;

        drawTriangle(midx12,midy12,midx23,midy23,midx31,midy31,yellow);

        sierpinski(x1,y1,midx12,midy12,midx31,midy31,d-1);
        sierpinski(midx12,midy12,x2,y2,midx23,midy23,d-1);
        sierpinski(midx31,midy31,midx23,midy23,x3,y3,d-1);

    }
}
