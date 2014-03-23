#include<stdio.h>
main(){
	int a;
	printf("Enter the number to check for perfect number\n");
	scanf("%d",&a);
	int i;
	int sum=0;
	for(i=1;i<=a/2;i++){
		sum+=(a%i==0)?i:0;
	}
	if (sum==a)
	{
		printf("The number is a perfect number.\n");
	}
	else{
		printf("The number is not a perfect number.\n");
	}
	getch();
}
