#include<stdio.h>
int replace(char *,char ,char );
main(){
    char s[400],a,b;
    printf("Enter the string:");
    gets(s);
    printf("Enter character to be replaced:");
    scanf("%c",&a);
    fflush(stdin);
    printf("Enter character which will replace:");
    scanf("%c",&b);
    fflush(stdin);
    printf("The number of replacements made is:%d",replace(s,a,b));
    printf("\nThe replaced string is:");
    puts(s);
}
int replace(char *p,char x,char y){
    int count=0;
    while(*p!='\0'){
        if(*p==x){
            *p=y;
            count++;
        }
        p++;
    }
    return count;
}
