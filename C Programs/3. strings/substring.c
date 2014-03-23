#include<stdio.h>
#include<string.h>
int substr(char *,char *,int ,int );
main(){
    char a[400],b[400];
    int pos,n;
    printf("Enter the string:");
    gets(b);
    printf("Enter the position:");
    scanf("%d",&pos);
    printf("Enter the number of characters to be copied:");
    scanf("%d",&n);
    int l=substr(a,b,pos,n);
    printf("The length of the copied string is:%d",l);
    printf("\ncopied string is:");
    puts(a);
}
int substr(char *p,char *q,int x,int y){
    q+=x;
    int z=y;
    while(*q!='\0'&&y!=0){
        *p=*q;
        q++,p++;
        y--;
    }
    *p='\0';
    return z-y;
}
