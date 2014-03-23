#include<stdio.h>
void main(){
     char ch;
     printf("Enter the character:");
     ch=getchar();
     if(ch<97){
               ch+=32;
     }
     else{
          ch-=32;
     }
     printf("Changed character is:%c",ch);
     getch();
}
