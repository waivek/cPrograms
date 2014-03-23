#include<stdio.h>
main(){
	int a;
	int b;
	a=0;
	b=1;
	int i;
	for(i=1;i<=10;i++){
		printf("%d)\t%d\n",i,a);
		a=a+b;
		b=a-b;
	}
	getch();
}
