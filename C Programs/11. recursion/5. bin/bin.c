#include<stdio.h>

int bin(int );

main(){
    int i;
    for(i=1;i<16;i++){
        printf("%02d ",i);
        bin(i);
        putchar('\n');
    }
}

int bin(int n){
    if(n>1){
        bin(n/2);
    }
    printf("%d",n%2);
}
