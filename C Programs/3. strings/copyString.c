#include<stdio.h>
main(){
	int n,i,j;
	char s[400];
	printf("Enter the array:\t");
	gets(s);
	char p[400];
	printf("The original string is:\t");
	puts(s);
	printf("The copied string is:\t");
	for(i=0;s[i]!='\0';i++){
		p[i]=s[i];
	}
	puts(s);
	getch();
}