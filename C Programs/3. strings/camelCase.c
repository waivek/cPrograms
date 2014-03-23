#include<stdio.h>
#include<string.h>
void camelCase(char *);
main(){
    char s[400];
    printf("Enter the string:");
    gets(s);
    camelCase(s);
    printf("String in camel case is:");
    puts(s);
}
void camelCase(char *p){
    if(*p>='a'&&*p<='z'){
        *p-=32;
    }
    char t[40]={'.',',',';',' ','\0'};
    char *q=p+1;
    while(*p!='\0'){
        if(strchr(t,*p)){
            if(*q>='a'&&*q<='z'){
                *q-=32;
            }
        }
        p++,q++;
    }
}
