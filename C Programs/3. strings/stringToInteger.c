#include<stdio.h>
main(){
	int n,i,j;
	n=0;
	char s[400];
	printf("Enter the string:\t");
	gets(s);
	printf("The numeric equvalent is\t:");
	for(i=0;s[i]!='\0';i++){
		n=(n*10)+s[i]-'0';
	}
	printf("%d\n",n );
	getch();
}
