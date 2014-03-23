#include<stdio.h>
#include<string.h>
main(){
    FILE *fp=fopen("cL.txt","r");
    char ch,cl;
    int a[26],i;
    for(i=0;i<26;i++){
        a[i]=0;
    }
    while((ch=fgetc(fp))!=EOF){
        cl=tolower(ch);
        if(cl>='a'&&cl<='z'){
            a[cl-'a']++;
        }
    }
    for(ch='a';ch<='z';ch++){
        printf("%c:%d\n",ch,a[ch-'a']);
    }
}
