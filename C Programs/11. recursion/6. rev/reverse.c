#include<stdio.h>
 int rev(int );

 int main(){
    int x=0;
    printf("Number ");
    scanf("%d",&x);
    printf("Rev of %d is ",x);
    rev(x);
 }

 int rev(int x){
     if(x>0){
        printf("%d",x%10);
        rev(x/10);
     }
 }
