#include<stdio.h>
main(){
	int n,i,j;
	char s[400];
	printf("Enter the 1st array:\t");
	gets(s);
	char p[400];
	printf("Enter the 2nd array:\t");
	gets(p);
	printf("The appendage of the two string is:\t");
	n=strlen(s);
	for(i=n;p[i-n]!='\0';i++){
		s[i]=p[i-n];
	}
	s[i]='\0';
	puts(s);
	getch();
}
