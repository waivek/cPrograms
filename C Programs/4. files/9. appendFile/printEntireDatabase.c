#include<stdio.h>
main(){
    FILE *fp=fopen("data.dat","r");
    char str[100];
    while(fgets(str,99,fp)){
        printf("%s",str);
    }
    fclose(fp);
}
