#include<stdio.h>
#include<string.h>
main(){
	int n,i,j;
	n=0;
	char s[400],*p;
	printf("Enter the string:\t:");
	gets(s);
	printf("The number of vowels in the string are\t:");
	for(p=s;*p!='\0';p++){
		if((*p=='a')||(*p=='e')||(*p=='i')||(*p=='o')||(*p=='u')||(*p=='A')||(*p=='E')||(*p=='I')||(*p=='O')||(*p=='U')){
			n++;
		}
	}
	printf("%d\n",n );
	getch();
}
