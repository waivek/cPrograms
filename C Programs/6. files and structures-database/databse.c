#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define as 2
struct student{
    char r[20];
    char n[20];
    unsigned int a;
    float m;
    char g;
};
char getGrade(int );
void displayHeader();
void displayData();
struct student getData();
void putData(struct student );
void updateData();
void get_Field(char *,char *,int );
main(){
    struct student s[as];
    int i;
    for(i=0;i<as;i++){
        s[i]=getData();
        putData(s[i]);
    }
    system("cls");
    displayHeader();
    displayData();
    printf("\nPress Enter to continue");
    getch();
    system("cls");
    updateData();
    displayHeader();
    displayData();

}
void putData(struct student y){
    FILE *fp=fopen("data.dat","a+");
    char str[100];
    sprintf(str,"%s:%s:%d:%.2f:%c\n",y.r,y.n,y.a,y.m,y.g);
    fputs(str,fp);
    fclose(fp);
}
struct student getData(){
    struct student x;
    printf("Roll Number:");
    gets(x.r);
    printf("Name:");
    gets(x.n);
    printf("Enter the age:");
    scanf("%d",&x.a);
    fflush(stdin);
    printf("Enter the marks:");
    scanf("%f",&x.m);
    fflush(stdin);
    x.g=getGrade(x.m);
    return x;
}
void displayHeader(){
    printf("%-20s","Roll Number");
    printf("%-20s","Name");
    printf("%-5s","Age");
    printf("%-7s","Marks");
    printf("%-5s\n","Grade");
}
void displayData(){
    char str[100],temp[100];
    struct student s;
    FILE *fp=fopen("data.dat","r");
    while(fgets(str,99,fp)){
        get_Field(s.r,str,1);
        get_Field(s.n,str,2);
        get_Field(temp,str,3);
        s.a=atoi(temp);
        get_Field(temp,str,4);
        s.m=atof(temp);
        s.g=getGrade(s.m);
        sprintf(temp,"%-20s%-20s%-5d%-7.2f%-5c",s.r,s.n,s.a,s.m,s.g);
        puts(temp);
    }
    fclose(fp);
}
char getGrade(int x){
    char g;
    if(x>80){
        g='A';
    }
    else if(x>65){
        g='B';
    }
    else if(x>50){
        g='C';
    }
    else if(x>40){
        g='D';
    }
    else{
        g='E';
    }
    return g;

}

void updateData(){
    struct student s;
    char str[100],temp[100];
    char *p;
    long offset=0;
    printf("Enter the roll-number to update\t:");
    gets(s.r);
    printf("Enter marks:");
    scanf("%f",&s.m);
    FILE *fp=fopen("data.dat","r+");
    while(fgets(str,99,fp)){
        if(strstr(str,s.r)){
            break;
        }
        offset=ftell(fp);
    }
    fseek(fp,offset,SEEK_SET);
    get_Field(s.n,str,2);
    get_Field(temp,str,3);
    s.a=atoi(temp);
    s.g=getGrade(s.m);
    sprintf(str,"%s:%s:%d:%.2f:%c",s.r,s.n,s.a,s.m,s.g);
    fputs(str,fp);
    fclose(fp);
}
void get_Field(char *p,char *q,int x){
    while(x!=1){
        if(*q==':'){
            x--;
        }
        q++;
    }
    while(*q!='\0'&&*q!=':'){
        *p=*q;
        p++;
        q++;
    }
    *p='\0';
}
