
#include<stdio.h>
#include<string.h>
void getField(char *,char *,int );
main(){
    char n[100],r[100],a[100],m[100],str[100],g[100];
    printf("Enter the roll-number\t:");
    gets(r);
    r[0]=tolower(r[0]);
    FILE *fp=fopen("data.dat","r");
    while(fgets(str,99,fp)){
        if(strstr(str,r)){
            getField(n,str,2);
            getField(a,str,3);
            getField(m,str,4);
            getField(g,str,5);
        }
    }
    printf("Name =%s\n",n);
    printf("Age  =%s\n",a);
    printf("Marks=%s\n",m);
    printf("Grade=%s\n",g);
    fclose(fp);
}
void getField(char *p,char *q,int x){
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
