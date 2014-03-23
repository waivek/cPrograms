#include<stdio.h>
main(){
     float f;
     printf("Enter temperatrue in fahrenheit:");
     scanf("%f",&f);
     float c;
     c=(f-32);
     c*=5;
     c/=9;
     printf("Temperature in celsisus is:%f C",c);
     getch();
}
