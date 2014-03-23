#include<stdio.h>

int fact(int );

main(){
    int x=0;
    printf("Enter no. to facorial upto: ");
    scanf("%d",&x);
    printf("The factorial is: %d", fact(x));
}

int fact(int y){
    if(y==1){
        return 1;
    }
    return y*fact(y-1);
}
