#include<stdio.h>
#include<conio.h>
int main(){
    int year;
	printf("Enter year:");
	scanf("%d", &year);
	if(year%4==0){
		printf("Leap year");
    }
	else{
		printf("Not a leap year");
	}
	getch();
	return 0;
}
