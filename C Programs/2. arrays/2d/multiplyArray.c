#include<stdio.h>
main(){
	int r1,c1,r2,c2,i,j;
	printf("Enter the number for the number of rows:\t");
	scanf("%d",&r1);
	printf("Enter the number for the number of cols:\t");
	scanf("%d",&c1);
	int a[r1][c1];
	printf("Enter the array-\n");
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			printf("Enter element at %d,%d:\t",i,j );
			scanf("%d",&a[i][j]);	
		}
	}
	printf("Enter the number for the number of rows:\t");
	scanf("%d",&r2);
	printf("Enter the number for the number of cols:\t");
	scanf("%d",&c2);
	int b[r2][c2];
	printf("Enter the array-\n");
	for(i=0;i<r2;i++){
		for(j=0;j<c2;j++){
			printf("Enter element at %d,%d:\t",i,j );
			scanf("%d",&b[i][j]);	
		}
	}
	if(r2!=c1){
		printf("Arrays cannot be multiplied");
		exit(0);
	}
    int c[r1][c2];
	int k;
	int sum=0;
	for(i=0;i<r1;i++){
		for(j=0;j<c2;j++){
			for(k=0;k<r2;k++){
				sum+=a[i][k]*b[k][j];
			}
			c[i][j]=sum;
			sum=0;
		}
	}
	printf("The multiplication of the 2 arrays is \n");
	for(i=0;i<r1;i++){
		for(j=0;j<c2;j++){
			printf("%d\t",c[i][j] );
		}
		putchar('\n');
	}
	getch();
}
