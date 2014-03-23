#include<stdio.h>
#include<string.h>
main(){
	int n,i,j;
	n=0;
	char s[400],t[400],*p,*q;
	printf("Enter the string:\t:");
	gets(s);
	printf("Enter the integer\t:");
	scanf("%d",&n);
	printf("The first n characters are\t:");
	i=0;
	q=t;
	for(p=s;(*p!='\0')&&(i<n);p++){
		*q=*p;
		i++;
	}
	puts(s);
	getch();
}
