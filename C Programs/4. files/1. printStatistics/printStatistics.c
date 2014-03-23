#include<stdio.h>
#include<string.h>
main(){
    FILE *fp=fopen("pS.txt","r");
    char ch,cl;
    int vcount=0,ccount=0,lcase=0,ucase=0,nalph=0;
    while((ch=fgetc(fp))!=EOF){
        cl=tolower(ch);
        putchar(ch);
        if(ch=='\n'){
            continue;
        }
        if(cl=='a'||cl=='e'||cl=='i'||cl=='o'||cl=='u'){
            vcount++;
        }
        if(cl>='a'&&cl<='z'){
            cl==ch?lcase++:ucase++;
        }
        else{
            nalph++;
        }
        ccount++;
    }
    printf("\na)Number of characters\t:%d\n",ccount);
    printf("b)Number of vowels\t:%d\n",vcount);
    printf("c)Number of upper-case\t:%d\n",ucase);
    printf("d)Number of lower-case\t:%d\n",lcase);
    printf("e)Number of non-alphabet:%d\n",nalph);
}
