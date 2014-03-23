#include<stdio.h>
main(){
	int r,c,i,j,n;
	printf("Enter number of rows:\t");
	scanf("%d",&r);
	printf("Enter number of cols:\t");
	scanf("%d",&c);
	int a[r][c];
	printf("Enter the array-\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("Enter element at %d,%d:\t",i,j );
			scanf("%d",&a[i][j]);	
		}
	}
	printf("Enter number to multiply by:\t");
	scanf("%d",&n);
	printf("The scalar array is-\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d ",n*a[i][j] );
		}
		putchar('\n');
	}
	getch();
}