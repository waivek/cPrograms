#include<stdio.h>
main(){
	int a;
	printf("Enter the number for square root:\n");
	scanf("%d",&a);
	int b=0;
	int c;
	int size=0;
	for(c=a;c!=0;c/=10){
		b*=10;
		b+=c%10;
		size++;
	}
	int length=(size/2)+(size%2);
	int arr[length];
	int i;
	for(i=0;i<length;i++){
		if((size%2==1)&&(i==0)){
			arr[i]=b%10;
			b/=10;
			continue;
		}
        arr[i]=b%100;
		b/=100;
	}
	int root=0;
	int dvsr=0;
	int j;
	int rem=0;//the program is not fully functional
	for(i=0;i<length;i++){
		dvsr=root*2;
		dvsr*=10;
		for(j=9;(dvsr+j)*j>rem+arr[i];j--){}
		rem=arr[i]-(dvsr+j)*j;
		rem*=100;
		root*=10;
		root+=j;	
	}
	printf("Root of the number is: %d\n",root );
	getch();
}
