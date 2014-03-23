#include<stdio.h>
main(){
	int n,i,j;
	char s[400];
	printf("Enter the string\t:");
	gets(s);
	n=strlen(s);
	printf("The string without the trailing spaces is\t:");
	for(i=n-1;s[i]==' ';i--){}
	s[i+1]='\0';
	printf("%s---",s );
	getch();
}
