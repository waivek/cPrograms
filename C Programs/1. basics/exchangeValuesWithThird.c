#include<stdio.h>
#include<conio.h>
int main(){
    int num1;
    int num2;
    int temp;
    printf("Enter First number\n");
    scanf("%d", &num1);
    printf("Enter Second number\n");
    scanf("%d", &num2);
    temp=num1;
    num1=num2;
    num2=temp;
}
