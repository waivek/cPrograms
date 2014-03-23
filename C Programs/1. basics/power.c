#include<stdio.h>
power(){
	int n;
	int m;
	int p=1;
	printf("Enter n:\n");
	scanf("%d",&n);
	printf("Enter m:\n");
	scanf("%d",&m);
	int i;
	for (i = 0; i < m; ++i)
	{
		p*=n;
	}
	printf("n^m is:%d\n", p);
}
