#include<stdio.h>
main(){
	int a;
	printf("Enter the number for the size of the array\n");
	scanf("%d",&a);
	float array[a];
	float sum=0;
	int i;
	printf("Enter the array:\n");
	for(i=0;i<a;i++){
		scanf("%f",&array[i]);
		sum+=array[i];
	}
	sum/=a;
	printf("Average is %.2f\n",sum );
	float positiveD=0;
	float negativeD=0;
	for(i=0;i<a;i++){
		printf("The distance of %.2f from the Average is %.2f\n",array[i],array[i]-sum );
		positiveD=positiveD<array[i]-sum?array[i]-sum:positiveD;
		negativeD=negativeD>array[i]-sum?array[i]-sum:negativeD;
	}
	printf("The largest number is %.2f\nThe smallest number is %.2f\n",sum+positiveD,sum+negativeD );
	getch();
}
