#include<stdio.h>
#include<conio.h>
int main(){
    int num1;
    int num2;
    int sum;
    printf("Enter First number\n");
    scanf("%d", &num1);
    printf("Enter Second number\n");
    scanf("%d", &num2);
    sum=num1+num2;
    printf("Result=%d",sum);
    getch();
    return 0;
}
