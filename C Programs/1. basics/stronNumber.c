#include<stdio.h>
main(){
	int a;
	printf("Enter the number for strong\n");
	scanf("%d",&a);
	int sum=0;
	int b;
	for(b=a;b!=0;b/=10){
		sum+=fact(b%10);
	}
	if(sum==a){
		printf("The number is strong.\n");
	}
	else{
		printf("The number is not strong.\n");
	}
	getch();
}
int fact(int x){
	int y=1;
	int i;
	for(i=1;i<=x;i++){
		y*=i;
	}
	return y;
}
