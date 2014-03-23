#include<stdio.h>
#include<conio.h>
int lcm(int x,int y){
	int a=x;
	int b=y;
    while(a!=b){
		if(a>b){
			a=a-b;
		}
		else{
			b=b-a;
		}
	}
	return ((x*y)/a);
}
int hcf(int x,int y){
    return (x*y)/lcm(x,y);
}
int add(int x,int y){
    return x+y;
}
int subtract(int x,int y){
    return x-y;
}
int multiply(int x,int y){
    return x*y;
}
int divide(int x,int y){
    return x/y;
}
void main(){
    int n,m,i;
    printf("Enter numbers:");
    scanf("%d %d",n,m);
    printf("Enter option:");
    printf("1. add");
    printf("2. subtract");
    printf("3. multiply");
    printf("4. divide");
    printf("5. hcf");
    printf("6. lcm");
    scanf("%d"&i);
    switch(i){
        case 1:
        printf("Sum is %d:"add(n,m));
        break;
        case 2:
        printf("Difference is %d:"subtract(n,m));
        break;
        case 3:
        printf("Product is %d:"multiply(n,m));;
        break;
        case 4:
        printf("Quotient is %d:"divide(n,m));
        break;
        case 5:
        printf("HCF is %d:"hcf(n,m));
        break;
        case 6:
        printf("LCM is %d:"lcm(n,m));
        break;
    }
}
