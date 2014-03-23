#include<stdio.h>
#include<conio.h>
int main(){
    int num1;
    int num2;
    printf("Enter First number\n");
    scanf("%d", &num1);
    printf("Enter Second number\n");
    scanf("%d", &num2);
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
}
