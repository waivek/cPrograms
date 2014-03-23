#include<stdio.h>
main(){
       int i;
       printf("Enter integer:");
       scanf("%d", &i);
       int u;
       u=i%10;
       printf("Value of %d in its units place is:%d",i,u);
       getch();
}
