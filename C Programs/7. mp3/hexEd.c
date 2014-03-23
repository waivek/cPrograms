#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main(){
    FILE *fp=fopen("abc.mp3","rb");
    FILE *fin=fopen("abc.mp3","rb");
    fseek(fin,0,SEEK_END);
    unsigned long b = ftell(fin),cur=0;
    printf("%d",b);
    getch();
    unsigned char h[400],e[400],t[400];
    int i;
    unsigned char c;
    int j;
    for(;1;){
        memset(h,'\0',400);
        memset(e,'\0',400);
        memset(t,'\0',400);
        for(i=0;i<16;i++){
            c=fgetc(fp);
            //printf("CURRENT: %d",cur);
            if(cur>=b){
                exit(0);
            }
            sprintf(t,"%02x ",c);
            strcat(h,t);
            if(c<32||c>126){
                c=' ';
            }
            sprintf(t,"%c",c);//SLOW
            strcat(e,t);
            cur++;
        }
        printf("%s|%s",h,e);
        putchar('\n');
    }
    fclose(fp);
}
