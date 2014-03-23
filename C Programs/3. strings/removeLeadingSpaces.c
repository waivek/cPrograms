#include<stdio.h>
main(){
	int n,i,j;
	char s[400];
	printf("Enter the string\t:");
	gets(s);
	printf("The string without the leading spaces is\t:");
	for(i=0;s[i]==' ';i++){}
	for(j=0;s[i]!='\0';j++){
		s[j]=s[i];
		i++;
	}
	s[j]='\0';
	puts(s);
	getch();
}
