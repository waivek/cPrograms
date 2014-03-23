#include<stdio.h>
main(){
	int ccount,i,spos;
	char s[400];
	printf("Enter the string:\t");
	gets(s);
	printf("Enter spos:\t");
	scanf("%d",&spos);
	printf("Enter ccount:\t");
	scanf("%d",&ccount);
	printf("The stream of characters is:\t");
	for(i=spos;i<spos+ccount;i++){
		putchar(s[i]);
	}
	getch();
}