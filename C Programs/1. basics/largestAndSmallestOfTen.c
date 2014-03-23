#include<stdio.h>
main(){
	int min;
	int max;
	int num;
	int i;
	printf("Enter your 10 values:\n");
	for(i=0;i<10;i++){
		scanf("%d",&num);
		if(i==0){
			min=num;
			max=num;
		}
		else{
			if(num<min){
				min=num;
			}
			if(num>max){
				max=num;
			}
		}
	}
	printf("Largest number is \t%d \nSmallest number is \t%d",max,min);
	getch();
}
