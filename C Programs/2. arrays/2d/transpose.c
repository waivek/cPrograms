#include<stdio.h>
main(){
	int r,c,i,j;
	printf("Enter the number for size of the rows:\t");
	scanf("%d",&r);
	printf("Enter the number for size of the columns:\t");
	scanf("%d",&c);
	int a[r][c];
	printf("Enter the array-\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("Enter element at %d,%d:\t",i,j );
			scanf("%d",&a[i][j]);	
		}
	}
	printf("The transposed array is:\n");
	for(i=0;i<c;i++){
		for(j=0;j<r;j++){
			printf("%d ",a[j][i] );
		}
		putchar('\n');
	}
	getch();
}