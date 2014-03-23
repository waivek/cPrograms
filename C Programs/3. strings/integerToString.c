#include<stdio.h>
main(){
	int n,temp,i,len;
	n=0;
	char s[400];
	printf("Enter the integer:\t");
	scanf("%d",&n);
	temp=n;
	for(len=0;temp!=0;len++){
		temp/=10;
	}
	temp=n;
	s[len]='\0';
	for(i=len-1;i>=0;i--){
		s[i]=temp%10+'0';
		temp/=10;
	}
	printf("The string is\t:");
	puts(s);
	getch();
}
