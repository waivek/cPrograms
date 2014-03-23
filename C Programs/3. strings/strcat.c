#include<stdio.h>
#include<string.h>
void pseudoStrcat(char *,char *);
main(){
    char a[400],b[400];
    int pos,n;
    printf("Enter the string:");
    gets(a);
    printf("Enter the string to append to the first one:");
    gets(b);
    pseudoStrcat(a,b);
    printf("\nConcatenated string is:");
    puts(a);
}
void pseudoStrcat(char *p,char *q){
    p+=strlen(p);
    while(*q!='\0'){
        *p=*q;
        q++,p++;
    }
    *p='\0';
}
