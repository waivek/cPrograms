#include<stdio.h>
int binToDec(int x){
	int b=0;
	int c=x;
	int d=x;
	int i;
	for(i=0;x!=0;x/=10,i++){
		b+=(x%10)*pow(2,i);
	}
	return b;
	getch();
}
main(){
	int n=0;
	char hex[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	printf("Enter number of digits in the binary number.:\n")
;	scanf("%d",&n);
	char ch[n];
	int x[(n/4)+1];
	int i;
	printf("Enter the number:\n");
	for (int i = 0; i < n; ++i)
	{
		scanf("%c",&ch[i]);
	}
	int k;
	int j=0;
	for(i=0;i<(n/4)+1;i++){
		for(k=0;k<4;k++){
			if ((i==0)&&((j+n)%4!=0)){
				continue;
			}
			x[i]*=10;
			x+=c[j]-'0';
			j++;
		}
	}


	getch();
}