#include<stdio.h>
#include<string.h>
main(){
	int n,i,j;
	n=0;
	char s[400],t[400],*p,*q;
	printf("Enter the string:\t:");
	gets(s);
	printf("The copied string without spaces is\t:");
	q=t;
	for(p=s;*p!='\0';p++){
		if(*p!=' '){
			*q=*p;
			q++;
		}
	}
	*q='\0';
	puts(t);
	getch();
}
