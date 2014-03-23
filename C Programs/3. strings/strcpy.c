#include<stdio.h>
#include<string.h>
void pseudoStrcpy(char *,char *);
main(){
    char a[400],b[400];
    int pos,n;
    printf("Enter the string:");
    gets(b);
    pseudoStrcpy(a,b);
    printf("\ncopied string is:");
    puts(a);
}
void pseudoStrcpy(char *p,char *q){
    while(*q!='\0'){
        *p=*q;
        q++,p++;
    }
    *p='\0';
}
