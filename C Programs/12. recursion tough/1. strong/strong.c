#include<stdio.h>

int fact(int );
int strong(int );

int main(){
    int n=0;
    printf("Num ");
    scanf("%d",&n);
    int s=strong(n);
    printf("Strong %d\n",s);
}

int fact(int x){
    if(x==1){
        return 1;
    }
    return x*fact(x-1);
}

int strong(int x){
    if(x==0){
        return 0;
    }
    return fact(x%10)+strong(x/10);
}
