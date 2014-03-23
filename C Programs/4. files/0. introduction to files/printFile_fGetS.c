#include<stdio.h>
main(){
    FILE *fp=fopen("abc.txt","r");
    char a[100];
    while(fgets(a,99,fp)){
        printf("%s",a);
    }
    fclose(fp);
}
