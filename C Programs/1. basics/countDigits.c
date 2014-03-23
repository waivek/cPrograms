#include<stdio.h>
main(){
       int i;
       printf("Enter integer:");
       scanf("%d", &i);
       int u=0;
       printf("Reverse of %d is ",i);
       while(i!=0){
		u*=10;
		u+=(i%10);
		i/=10;
		}
       printf("%d",u);
       getch();
}

