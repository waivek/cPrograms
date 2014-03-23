#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void writeData(int ,char *,int ,float ,char );
main(){
    char str[50],grade;
    int rollNo,age;
    float marks;
    printf("Enter the rollno:");
    scanf("%d",&rollNo);
    fflush(stdin);
    printf("Enter the name:");
    gets(str);
    printf("Enter the age:");
    scanf("%d",&age);
    fflush(stdin);
    printf("Enter the marks:");
    scanf("%f",&marks);
    fflush(stdin);
    printf("Enter the grade:");
    scanf("%c",&grade);
    fflush(stdin);
    writeData(rollNo,str,age,marks,grade);
}
void writeData(int r,char *n,int a,float m,char g){
    FILE *fp=fopen("data.dat","a+");
    char str[100];
    sprintf(str,"e%04d:%s:%d:%.2f:%c\n",r,n,a,m,g);
    fputs(str,fp);
    fclose(fp);
}
