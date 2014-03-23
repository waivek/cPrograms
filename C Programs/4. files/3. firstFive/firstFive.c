#include<stdio.h>
#include<string.h>
main(){
    char fName[100],str[100];
    int i;
    printf("Enter the file name with its extension\t:");
    gets(fName);
    FILE *fp=fopen(fName,"r");
    for(i=0;i<5&&fgets(str,99,fp);i++){
        printf("%s",str);
    }
    fclose(fp);
}
