#include<stdio.h>
main(){
	int n;
	printf("Enter the number for the size of the array:\t");
	scanf("%d",&n);
	int a[n][n];
	int i;
	int j;
	printf("Enter the array:\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("Enter element at %d,%d:\t",i,j );
			scanf("%d",&a[i][j]);	
		}
	}
	int sum=0;
	for(i=0;i<n;i++){
		sum+=a[i][i];
	}
	printf("The sum of the diagonal elemesnts in the array is %d\n", sum);
	getch();
}
dai