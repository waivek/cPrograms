#include<stdio.h>
main(){
	int a;
	printf("Enter the number for the size of the array\n");
	scanf("%d",&a);
	int sumEven=0;
	int sumOdd=0;
	int array[a];
	printf("Enter the array\n");
	int i;
	for (i = 0; i < a; ++i)
	{
		scanf("%d",&array[i]);
		if (i%2==0)
		{
			sumEven+=array[i];
		}
		else{
			sumOdd+=array[i];
		}
	}
	printf("The sume of the numbers in the Even location is %d\n",sumEven );
	printf("The sume of the numbers in the Odd location is %d\n",sumOdd );
	getch();
}