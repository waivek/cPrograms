#include<stdio.h>
main(){
	int max=0;
	int min=0;
	int avg=0;
	int sum=0;
	int i=0;
	int n=0;
	for(i=0;i<10;i++){
        printf("Enter the number %d:\n",i);
		scanf("%d",&n);
		sum+=n;
		if (i==0)
		{
			max=n;
			min=n;
		}
		else{
			if(max<n){
				max=n;
			}
			if(min>n){
				min=n;
			}
		}
	}
	avg=sum/10;
	printf("Average is %d\nMax is %d\nMin is%d",avg,max,min );
	getch();
}
