#include<stdio.h>
main(){
	int a;
	printf("Enter the number for the Floyds triange\n");
	scanf("%d",&a);
	int i;
	int j;
	int k=1;
	for(i=0;i<a;i++){
		for(j=0;j<=i;j++){
			printf("%d\t",k);
			k++;
		}
		putchar('\n');
	}
	getch();
}
