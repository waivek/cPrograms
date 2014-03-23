#include<stdio.h>
main(){
    FILE *fp2=fopen("enc.txt","r");
    FILE *fp1=fopen("dec.txt","w");
    char ch;
    for(;(ch=fgetc(fp2))!=EOF;fputc(ch,fp1)){
        if(ch=='\n'){
                continue;
        }
        ch-=5;
    }
    printf("Program has run");
    fclose(fp1);
    fclose(fp2);
}
