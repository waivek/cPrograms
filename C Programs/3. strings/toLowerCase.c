#include<stdio.h>
main(){
	int n,i,j;
	char s[400];
	printf("Enter the string:\t");
	gets(s);
	printf("The string in lower case is:\t");
	for(i=0;s[i]!='\0';i++){
		if((s[i]>='A')&&(s[i]<='Z')){
			s[i]+=32;
		}
	}
	puts(s);
	getch();
}