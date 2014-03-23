#include<stdio.h>
#include<math.h>

int isPerfect(int );
int isPrime(int ,int );
int sumPrimeFact(int, int );
int isPrimeFactor(int, int );

main(){
    int i;
    for(i=1;i<30;i++){
        if(isPerfect(i)){
            printf("%d ",i);
        }
    }
    i=28;
    int sum=sumPrimeFact()
}

int isPerfect(int x){
    int sum=sumPrimeFact(x,1);
    if(sum==x){
        return 1;
    }
    return 0;
}

int sumPrimeFact(int x,int i){
    int half=x/2;
    if(i<=half){
        if(isPrimeFactor(x,i)){
           return i+sumPrimeFact(x,i+1);
        }
        sumPrimeFact(x,i+1);
    }
    return 0;
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

int isPrimeFactor(int x, int i){
    if(x%i==0){
        if(isPrime(i,2)){
            return 1;
        }
    }
    return 0;
}
