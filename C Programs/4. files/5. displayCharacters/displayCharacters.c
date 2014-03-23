#include<stdio.h>
#include<string.h>
char *getString(FILE *,int );
main(){
    char str[100],*p;
    int x,y,z,i,flag=0,len;
    printf("x=");
    scanf("%d",&x);
    printf("y=");
    scanf("%d",&y);
    printf("z=");
    scanf("%d",&z);
    FILE *fp=fopen("dC.txt","r");
    getString(str,fp,z);
    len=strlen(str);
    if(y+1>len){
        printf("Index Out of Bounds\n");
    }
    p=str+y;
    for(i=0;i<x&&*p!='\0';i++){
        putchar(*p);
        p++;
    }
    fclose(fp);
}
void getString(char *p,FILE *fp,int z){
    int i,flag=0;
    char str[100];
    for(i=1;i<=z&&fgets(str,99,fp);i++){
        if(i==z){
            flag=1;
            p=str;
        }
    }
    if(flag!=1){
        printf("File Out of Bounds\n");
        exit(0);
    }
    return str;
}
