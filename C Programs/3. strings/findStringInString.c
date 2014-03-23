#include<stdio.h>
main(){
	int n,i,j,m,flg,count;
	flg=0;
	count=0;
	char s[400];
	printf("Enter the 1st array:\t");
	gets(s);
	char p[400];
	printf("Enter the 2nd array to find in the first:\t");
	gets(p);
	n=strlen(s);
	m=strlen(p);
	for(i=0;i<=n-m;i++){
		for(j=0;p[j]!='\0';j++){
			if(p[j]!=s[i+j]){
				flg=1;
			}
		}
		if(flg==0){
			count++;
		}
		flg=0;
	}
	printf("%d\n",count);
	getch();
}
