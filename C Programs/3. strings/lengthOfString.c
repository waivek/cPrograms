#include<stdio.h>
main(){
	int n,i,j;
	char s[400];
	printf("Enter the string:\t");
	gets(s);
	printf("The length of the string is:\t");
	for(i=0;s[i]!='\0';i++){}
	printf("%d\n",i );
	getch();
}
