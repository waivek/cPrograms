#include<stdio.h>
struct music{
    char tag[3];				/* = "TAG" */
    char title[30];
    char artist[30];
    char album[30];
    char year[4];
    char comment[30];
    unsigned char genre;
  }
main(){
    struct music mp3;
    FILE *fp=fopen("abc.mp3","rb");
    fseek(fp,-128,SEEK_END);
    while(1){
        fread(&mp3,sizeof(mp3),1,fp);
        if (strncmp(mp3.tag, "TAG", 3) == 0){
            printf("TAG is present");
        }
        puts(mp3.title);
        puts(mp3.artist);
        puts(mp3.album);
        puts(mp3.year);
        puts(mp3.comment);
        if(!feof(fp)){
            break;
        }
    }
}
