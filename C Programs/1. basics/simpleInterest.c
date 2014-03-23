#include<stdio.h>
main(){
     float p;
     float r;
     float t;
     printf("Enter principal:");
     scanf("%f",&p);
     printf("Enter time:");
     scanf("%f",&t);
     printf("Enter rate:");
     scanf("%f",&r);
     float si;
     si=p*r*t;
     si/=100;
     printf("Simple interest is:Rs.%f/-",si);
     getch();
}
