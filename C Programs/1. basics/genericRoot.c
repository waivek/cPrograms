#include<stdio.h>
main(){
	int a;
	printf("Enter the number for generic root\n");
	scanf("%d",&a);
	int flg=0;
	int grt=a;
	while(flg!=1){
		grt=genericRoot(grt);
		if(grt/10==0){
			flg=1;
		}
	}
	printf("Generic root of %d is %d\n",a,grt);
	getch();

}
int genericRoot(int x){
	int sum;
	for(sum=0;x!=0;x/=10){
		sum+=x%10;
	}
	return sum;
}
