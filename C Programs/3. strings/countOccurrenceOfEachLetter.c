#include<stdio.h>
int countOccurrence(char ,char *);
main(){
    char s[400];
    int cnt;
    printf("Enter the string:");
    gets(s);
    char *q;
    for(q=s;*q!='\0';q++){
        cnt=countOccurrence(*q,s);
        printf("%c:%d\n",*q,cnt);
    }
}
int countOccurrence(char ch,char *p){
    int count=0;
    while(*p!='\0'){
        if(*p==ch){
            count++;
        }
        p++;
    }
    return count;
}
