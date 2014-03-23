#include<stdio.h>
main(){
    FILE *b=fopen("abc.mp3","rb");
    FILE *e=fopen("abc.mp3","rb");
    fseek(e,0,SEEK_END);
    printf("%d",ftell(e));
    fclose(b);
    fclose(e);
}
