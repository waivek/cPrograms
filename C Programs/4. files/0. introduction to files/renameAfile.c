#include<stdio.h>
main(){
    char nn[]="oldname.txt";
    char on[]="newname.txt";
    int result;
    result=rename(on,nn);
    if(result==0){
        printf("File renamed successfully.");
    }
    else{
        printf("File not renamed.");
    }
}
