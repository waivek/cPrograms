#include<stdio.h>
#include<string.h>

void bubble(char* );
void anagram(char* );
char* getMin(char* );
void change(char* ,char* );
int fact(int );

main(){
    char s[]="1234";
    printf("\n");
    anagram(s);
}

void anagram(char *p){
    char *q=p;
    int len=strlen(q);
    int n=fact(len);
    int i;
    for(i=0;i<n;i++){
        printf("%02d| %s\t",i+1,q);
        if((i+1)%4==0){
            putchar('\n');
            putchar('\n');
        }
        for( p=q+len-2 ; p>=q ; p--){
            if(*p<*(p+1)){
                char* m=getMin(p);
                change(m,p);
                bubble(p+1);
                break;
            }
        }
    }
}

void bubble(char *p){
    int swapHappened=1;
    int len=getLen(p);
    while(swapHappened){
        swapHappened=0;
        int i;
        for(i=0;i<len-1;i++){
            if(*p>*(p+1)){
                change(p,p+1);
                swapHappened=1;
            }
            p++;
        }
    }
}

int getLen(char *p){
    int i;
    for(i=0;*p!='\0';p++){}
    return i;
}

void change(char* p,char* q){
    char t;
    t=*p;
    *p=*q;
    *q=t;
}

char* getMin(char* p){
    char t[]={'9'+1};
    char* m=t;
    char ch=*p;
    for(p=p+1;*p!='\0';p++){
        if(*p>ch&&*p<*m){
            m=p;
        }
    }
    return m;
}

int fact(int n){
    int prod;
    for(prod=1;n>1;n--){
        prod*=n;
    }
    return prod;
}
