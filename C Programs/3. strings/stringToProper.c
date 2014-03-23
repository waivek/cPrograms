#include<stdio.h>
main(){
	int n,i,j;
	char s[400];
	printf("Enter the string:\t");
	gets(s);
	s[0]-=((s[0]>='a')&&(s[0]<='z'))?32:0;
	printf("The proper string is\t:");
	for(i=1;s[i]!='\0';i++){
		if((s[i-1]==' ')||(s[i-1]=='.')||(s[i-1]==',')){	
			s[i]-=((s[i]>='a')&&(s[i]<='z'))?32:0;
		}
	}
	puts(s);
	getch();
}
