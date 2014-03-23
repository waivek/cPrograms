#include<stdio.h>
#include<math.h>

int checkPrime(int ,int );

main(){
    int i=1;
    while(i<16){
        printf("%d %d\n",i,isPrime(i,2));
        i++;
    }
}

int isPrime(int x,int i){
    int rt=sqrt(x);
    if(i<=rt){
        if(x%i==0){
            return 0;
        }
        return isPrime(x,i+1);
    }
    return 1;
}
