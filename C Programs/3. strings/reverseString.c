#include<stdio.h>
main(){
	int n,i,j;
	char s[400];
	char t=' ';
	printf("Enter the string:\t");
	gets(s);
	printf("The reversed string is:\t");
	for(i=0;i<strlen(s)/2;i++){
		t=s[i];
		s[i]=s[strlen(s)-1-i];
		s[strlen(s)-1-i]=t;
	}
	puts(s);
	getch();
}