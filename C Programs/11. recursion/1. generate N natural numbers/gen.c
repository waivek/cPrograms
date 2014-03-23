#include<stdio.h>

int gen(int );

main(){
    int x=0;
    printf("Enter no. of natural numbers: ");
    scanf("%d",&x);
    gen(x);
}

int gen(int y){
    printf("%d ",y);
    if(y==0){
        return 0;
    }
    gen(y-1);
}
