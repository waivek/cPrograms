#include<stdio.h>
main(){
    char d[100];
    FILE *fp2=fopen("bin.dat","rb");
    while(1){
        if(feof(fp2)){
            break;
        }
        fread(&d,99,1,fp2);
        puts(d);
    }
    fclose(fp2);
}
