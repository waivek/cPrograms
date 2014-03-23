#include<stdio.h>
#include<ctype.h>

void fillAlph(int* );
void getCount(char* ,int* );
void increment(char* ,int* );
void printCount(int* );

int main(){
    char s[100];
    int alp[26];
    fillAlph(alp);
    printf("String ");
    gets(s);
    getCount(s,alp);
    printf("Frequency\n");
    printCount(alp);
}

void fillAlph(int* c){
    int i;
    for(i=0;i<26;i++){
        *c=0;
        c++;
    }
}

void getCount(char* p,int* c){
    if(*p!='\0'){
        if(isalpha(*p)){
            increment(p,c);
        }
        getCount(p+1,c);
    }
}

void increment(char* p,int* c){
    char ch=tolower(*p);
    int val=ch-'a';
    c=c+val;
    *c=*c+1;
    c=c-val;
}

void printCount(int* c){
    int i;
    for(i=0;i<26;i++,c++){
        if(*c==0) continue;
        printf("%c = %d\n",'a'+i, *c);
    }
}
