#include<stdio.h>
main(){
    FILE *fp=fopen("abc.txt","r");
    char a[100];
    int i;
    for(i=1;fgets(a,99,fp);i++){
        printf("%d: %s",i,a);
    }
    fclose(fp);
}
