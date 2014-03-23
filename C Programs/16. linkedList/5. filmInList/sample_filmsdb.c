#include<stdio.h>
#define MAX 1500
struct film {
  int id;
  char title[30];
  char description[100];
  int year;
  int length;
  char rating[10];
  char special_feature[75];
};

struct film data[MAX];
int max_records=0;

main() {
    load_data();
    display_data();
    printf("%d\n",max_records);
}

load_data() {
  FILE *fpb;
  struct film f;
  int i=0;
  fpb=fopen("films.dat","rb");

  while(!feof(fpb)&&(i<MAX)) {
    fread(&f,sizeof(struct film),1,fpb);
    if(feof(fpb))
       break;
    data[i++]=f;
   }
   max_records=i;      // this is the total records loaded into the array
  fclose(fpb);
}

display_data() {
    int i;
    for(i=0;i<max_records;i++)
       printf("%04d : %30s : %5d Minutes\n",data[i].id,data[i].title,data[i].length);
}

