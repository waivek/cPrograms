#include<stdio.h>
main(){
	int a=0;
	printf("Enter number in decimal:\n");
	scanf("%d",&a);
	int b=a%8;
	int i;
	for(a/=8,i=1;a!=0;a/=8,i++){
		b+=(a%8)*pow(10,i);
	}
	printf("The number in octal is:\n%d",b);
	getch();
}