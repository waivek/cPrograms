#include<stdio.h>
main(){
	int a=0;
	printf("Enter number in octal:\n");
	scanf("%d",&a);
	int b=0;
	int i;
	for(i=0;a!=0;a/=10,i++){
		b+=(a%10)*pow(8,i);
	}
	printf("The number in decimal is:\n%d",b);
	getch();
}
