#include<stdio.h>
#include<string.h>
main(){
	int n1,n2,i,j;
	char s[400],t[400],*p,*q;
	printf("Enter the string:\t:");
	gets(s);
	printf("Enter starting location\t:");
	scanf("%d",&n1);
	printf("Enter the number of characters\t:");
	scanf("%d",&n2);
	q=t;
	i=0;
	for(p=s+n1;(i<n2)&&(*p!='\0');p++){
		*q=*p;
		q++;
		i++;
	}
	*q='\0';
	p=s+n1;
	q=p+n2;
	while(*q!='\0'){
		*p=*q;
		q++;
		p++;
	}
	*p='\0';
	printf("\nThe deleted characters are\t:");
	puts(t);
	printf("\nThe modified string is\t:");
	puts(s);
}
