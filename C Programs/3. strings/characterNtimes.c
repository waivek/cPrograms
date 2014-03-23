#include<stdio.h>
main(){
	int n,i,j;
	char s[400];
	char ch=' ';
	printf("Enter n\t:");
	scanf("%d",&n);
	printf("Enter the character\t:");
	fflush(stdin);
    ch=getchar();
	printf("The built string is\t:");
	for(i=0;i<n;i++){
		s[i]=ch;
	}
	s[i]='\0';
	puts(s);
	getch();
}
