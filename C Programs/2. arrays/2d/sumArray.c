#include<stdio.h>
main(){
	int a[3][3];
	int b[3][3];
	int i;
	int j;
	printf("Enter the first array:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the second array:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&b[i][j]);
		}
	}
	int choice;
	printf("Would you like to add or subtract the arrays?\n");
	printf("1: subtract\n");
	printf("2: add\n");
	scanf("%d",&choice);
	if (choice==1)
	{
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				printf("%d ",a[i][j]-b[i][j] );
			}
			putchar('\n');
		}
	}
	if (choice==2)
	{
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				printf("%d ",a[i][j]+b[i][j] );
			}
			putchar('\n');
		}
	}
	getch();
}