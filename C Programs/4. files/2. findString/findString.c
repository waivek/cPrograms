#include<stdio.h>
#include<string.h>
main(){
    FILE *fp=fopen("fS.txt","r");
    char str[100],*p,*q,key[100];
    printf("Enter item to search for\t:");
    gets(key);
    int i;
    for(i=1;fgets(str,99,fp);i++){
        printf("\n%d:",i);
        for(p=str;*p!='\0';p++){
            if(q=strstr(p,key)){
                printf("%d,",q-str);
                p=q;
            }
        }
    }
    fclose(fp);
}
