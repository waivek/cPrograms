#include<stdio.h>
main(){
	int a[3][3]={10,20,30,
		40,50,60,
		70,80,90
	};
	int i;
	int j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",a[i][j] );
		}
		putchar('\n');
	}
	getch();
}