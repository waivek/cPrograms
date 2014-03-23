#include<stdio.h>
main(){
    FILE *fp=fopen("abc.txt","r");
    char ch=' ';
    while((ch=fgetc(fp))!=EOF){
        putchar(ch!=' '?ch:'-');
    }
    fclose(fp);
}
