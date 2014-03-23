#include<stdio.h>
#include<string.h>
main(){
	int n,i,j;
	n=0;
	char s[400],*p,;
	printf("Enter the string:\t:");
	gets(s);
	printf("The copied string with spaces replaced by hyphens is\t:");
	for(p=s;*p!='\0';p++){
		if(*p!=' '){
			*p='-';
		}
	}
	puts(s);
	getch();
}
