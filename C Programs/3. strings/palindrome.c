#include<stdio.h>
main(){
	int a=0;
	printf("Enter number to check for palindrome:\n");
	scanf("%d",&a);
	int b=0;
	int c;
	for(c=a;c!=0;c/=10){
		b*=10;
		b+=c%10;
	}
	if (a=b)
	{
		printf("The number is a palindrome\n");
	}
	else{
		printf("The number isn't a palindrome");
	}
	main();
	getch();
}
