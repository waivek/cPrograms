#include<stdio.h>
#include<string.h>
main(){
	int x;
	char s[400],t[400],*p,*q;
	printf("Enter the string\t:");
	gets(s);
	printf("Enter the string\t:");
	p=s;
	q=t;
	printf("The greater string is\t:");
	while((*p!='\0')&&(*q!='\0')){
		if(*p!=*q){
			break;
		}
		p++;
		q++;
	}
	x=*p-*q;
	if(x<0){
		puts(s);
	}
	else if(x>0){
		puts(t);
	}
	else{
		printf("The srtings are equal\t:");
	}
	getch();
}