#include<stdio.h>

int gcd(int ,int );

main(){
    int x=0,y=0,hcf=0;
    printf("no1 ");
    scanf("%d",&x);
    printf("no2 ");
    scanf("%d",&y);
    hcf=gcd(x>y?x:y,x>y?y:x);
    printf("GCD: %d", hcf);
}

int gcd(int big,int small){
    if(small==0){
        return big;
    }

    return gcd(small,big%small);
}
