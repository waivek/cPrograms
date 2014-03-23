#include<stdio.h>
main(){
	float a;
	float b;
	float c;
	printf("Enter the number for a.\n");
	scanf("%f",&a);
	printf("Enter the number for b.\n");
	scanf("%f",&b);
	printf("Enter the number for c.\n");
	scanf("%f",&c);
	float d=(b*b)-(4*a*c);
	d=sqrt(d);
	float root1=(-b+d)/(2*a);
	float root2=(-b-d)/(2*a);
	printf("The first root is %.2f\nThe second root is %.2f\n",root1,root2);
	getch();
}
