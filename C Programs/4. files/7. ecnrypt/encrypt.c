#include<stdio.h>
main(){
    FILE *fp1=fopen("enc.txt","w");
    FILE *fp2=fopen("dec.txt","r");
    char ch;
    for(;(ch=fgetc(fp2))!=EOF;fputc(ch,fp1)){
        if(ch=='\n'){
                continue;
        }
        ch+=5;
    }
    printf("Program has run");
    fclose(fp1);
    fclose(fp2);
}
