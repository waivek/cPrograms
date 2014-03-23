#include<stdio.h>
main(){
	int a;
	printf("Enter the number for Pascal Triangle rows\n");
	scanf("%d",&a);
	int i;
	int j;
	for(i=0;i<a;i++){
		for(j=0;j<a-i;j++){
			putchar(' ');
		}
		int c=0;
		for(j=0;j<=i;j++){
			c=nCr(i,j);
			printf("%d ",c);
		}
		putchar('\n');
	}
	getch();
}
int nCr(int n, int r){
	int b=fact(n)/(fact(r)*fact(n-r));
	return b;
}
int fact(int x){
	int f=1;
	int i;
	for(i=1;i<=x;i++){
		f*=i;
	}
	return f;
}
