#include<stdio.h>
main(){
	printf("Enter number to be checked for Armstrong\n");
	int n;
	scanf("%d",&n);
	int m=0;
	int sum=0;
	int cube=0;
	int digit=0;
	for (m = n; m!=0; m/=10)
	{
		digit=m%10;
		cube=digit*digit*digit;
		sum+=cube;
	}
	if (sum==n)
	{
		printf("TRUE.\n");
	}
	else{
		printf("FALSE.\n");
	}
	getch();
}
