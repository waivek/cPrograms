#include<stdio.h>
main(){
	int n=0;
	printf("Enter the number of rows!\n");
	scanf("%d",&n);
	int i=0;
	int j=0;
	for(i=0;i<n;i++){
		for(j=0;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	getch();
}
