#include<stdio.h>
void getBinary(int ,char *);
main(){
    char str[400];
    int n;
    printf("\nEnter the number to make binary:\t");
    scanf("%d",&n);
    getBinary(n,str);
    printf("\n%d in binary is:\t",n);
    puts(str);
}
void getBinary(int x,char *p){
    char *q;
    q=p;
    while(x!=0){
        *p=x%2+'0';
        x/=2;
        p++;
    }
    *p='\0';
    strrev(q);
}
