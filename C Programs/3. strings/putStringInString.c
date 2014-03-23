#include<stdio.h>
main(){
	int pos,i,j,lens,lent;
	char s[400],*p,*q,*r;
	printf("Enter the 1st array:\t");
	gets(s);
	char t[400];
	printf("Enter the 2nd array to put in the first:\t");
	gets(t);
	lens=strlen(s);
	lent=strlen(t);
	printf("Enter the position to put at\t:");
	scanf("%d",&pos);
	q=s+pos;
	for(p=s+lens;p>=q;p--){
            if(*p=='\0'){
            }
		*(p+lent)=*p;
	}
	for(r=t;*r!='\0';r++){
		*q=*r;
		q++;
	}
	printf("The new string is\t:");
	puts(s);
}
