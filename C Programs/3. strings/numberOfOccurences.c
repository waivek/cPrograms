#include<stdio.h>
main(){
	int n,i,j;
	char s[400];
	char c;
	printf("Enter the string:\t");
	gets(s);
	printf("Enter the search-item:\t");
	c=getchar();
	printf("The number of occurences of the search-item is:\t");
	j=0;
	for(i=0;s[i]!='\0';i++){
		if(s[i]==c){
			j++;
		}
	}
	printf("%d\n",j );
	getch();
}
