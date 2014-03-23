#include<stdio.h>
#define SIZE 7
main(){
    int a[SIZE]={9,8,7,6,5,4,3};
    int i,j;
    for(i=1;i<SIZE;i++){
        int x=a[i];
        for(j=i-1;x<a[j]&&j>=0;j--){
            a[j+1]=a[j];
        }
        a[j+1]=x;
        print(a);
    }
    print(a);
}

void print(int* p){
    int i;
    for(i=0;i<SIZE;i++){
        printf("%d ",*(p+i));
    }
    putchar('\n');
}
