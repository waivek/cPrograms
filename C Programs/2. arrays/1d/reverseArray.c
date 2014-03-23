#include<stdio.h>
main(){
	int a=10;
	int array[10];
	printf("Enter the array\n");
	int i;
	for (i = 0; i < a; i++){
		scanf("%d",&array[i]);
	}
	printf("Original array:\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d\t", array[i]);
	}
	printf("\n");
	int j;
	for (i=0,j=9; i < j; i++,j--){
		array[i]+=array[j];
		array[j]=array[i]-array[j];
		array[i]-=array[j];

	}
	printf("Reversed array:\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d\t", array[i]);
	}
	printf("\n");
	getch();
}
