#include<stdio.h>
#include<string.h>
main(){
	int n,i,j;
	n=0;
	char t={'.',',',';',' ','\0'};
	char s[400],*p,*q;
	printf("Enter the string:\t:");
	gets(s);
	printf("The word by word breakup is:\n");
	for(p=s;*p!='\0';p++){
		if(strchr(t,*p)){
			if((*(p+1)=='\0')&(!strchr(t,*(p+1)))){
				putchar('\n');
			}
			continue;
		}
		putchar(p);
	}
	getch();
}
