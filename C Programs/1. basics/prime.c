#include<stdio.h>
prime(){
	int flg;
	int n;
	printf("Enter the number:\n");
	scanf("%d",&n);
	int rt=(int)sqrt(n);
	flg=0;
	int i;
	for (i = 2; i <= rt; ++i)
	{
		if(n%i==0){
			flg=1;
		}
	}
	if(flg==1){
		printf("The number is composite.\n");
	}
	else{
		printf("The number is prime.\n");
	}

}
