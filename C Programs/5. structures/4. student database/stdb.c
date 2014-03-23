#include<stdio.h>
#define as 5
struct student{
    char r[20];
    char n[20];
    unsigned int a;
    float m;
    char g;
};
char getGrade(int );
void displayHeader();
void displayData(struct student );
struct student getData();
main(){
    struct student s[as];
    int i;
    for(i=0;i<as;i++){
        s[i]=getData();
    }
    system("cls");
    displayHeader();
    for(i=0;i<as;i++){
        displayData(s[i]);
    }
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
void displayData(struct student a){
        printf("%-20s",a.r);
        printf("%-20s",a.n);
        printf("%-5d",a.a);
        printf("%-7.2f",a.m);
        printf("%-5c\n",a.g);
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
