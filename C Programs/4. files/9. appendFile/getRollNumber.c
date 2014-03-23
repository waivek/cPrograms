#include<stdio.h>
#include<string.h>
void printField(char *);
void get_Field(char *,char *,int );
main(){
    char n[100],r[100],a[100],m[100],str[100],g[100];
    float marks;
    char *p;
    long offset=0;
    printf("Enter the roll-number\t:");
    gets(r);
    r[0]=tolower(r[0]);
    printField(r);
    printf("Enter marks:");
    scanf("%f",&marks);
    FILE *fp=fopen("data.dat","r+");
    while(fgets(str,99,fp)){
        if(strstr(str,r)){
            break;
        }
        offset=ftell(fp);
    }
    fseek(fp,offset,SEEK_SET);
    get_Field(n,str,2);
    get_Field(a,str,3);
    get_Field(g,str,5);
    sprintf(str,"%s:%s:%s:%.2f:%s",r,n,a,marks,g);
    fputs(str,fp);
    fclose(fp);
}
void printField(char *r){
    char n[100],a[100],m[100],str[100],g[100];
    FILE *fp=fopen("data.dat","r");
    while(fgets(str,99,fp)){
        if(strstr(str,r)){
            get_Field(n,str,2);
            get_Field(a,str,3);
            get_Field(m,str,4);
            get_Field(g,str,5);
        }
    }
    printf("Name =%s\n",n);
    printf("Age  =%s\n",a);
    printf("Marks=%s\n",m);
    printf("Grade=%s\n",g);
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
