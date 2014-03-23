#include<stdio.h>

int sigma(int );

main(){
    int x=0;
    printf("Enter no. to sum upto: ");
    scanf("%d",&x);
    printf("The sum is: %d", sigma(x));
}

int sigma(int y){
    if(y==0){
        return 0;
    }
    return y+sigma(y-1);
}
