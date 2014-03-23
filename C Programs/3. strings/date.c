#include<stdio.h>
#include<string.h>
main(){
    int dd,mm,yyyy;
    char month[12][20]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    printf("Enter day month year:\t");
    scanf("%d %d %d",&dd,&mm,&yyyy);
    printf("%02d-%s-%d",dd,month[mm-1],yyyy);
}
