#include<stdio.h>
main(){
       char ch;
       int i;
       for(i=0;i<256;i++){
               ch=i;
               printf("Character for ASCII value %d is %c\n",i,ch);
       }
       getch();
}
       
