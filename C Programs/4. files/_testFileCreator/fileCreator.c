#include<stdio.h>
#include<string.h>
main(){
    FILE *fp;
    char t[400],s[400],*p,*q;
    int i,n;
    printf("Enter the file names, separated by spaces:\n");
    gets(s);
    for(p=s;*p!='\0';p++){
        //strcpy(t,"");

        for(q=t;*p!=' '&&*p!='\0';p++){
            *q=*p;
            q++;
        }
        *q='\0';
        printf("\n%s",t);
        strcat(t,".txt");
        fp=fopen(t,"w");
        fclose(fp);
        if(*p=='\0')
            break;
    }
    //ASK SIR HOW TO TRAVERSTE 2D ARRAY USING ONLY POINTERS
}
