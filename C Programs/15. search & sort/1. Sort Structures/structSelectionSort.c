#include<stdio.h>
#define SIZE 5
struct student{int rollno;char name[20];int age;
};

main(){
    struct student data[SIZE]={  5, "Abhinav", 19,
                          1, "Arushi",20,
                          3, "Shashank",19,
                          2, "Gopalkrishnan", 20,
                          4, "Yamini", 19
                      };
    int i,scount=0,ssize=0;
    for(i=0;i<SIZE-1;i++){
        int j;
        int small=data[i].rollno;
        int pos=i;
        for(j=i+1;j<SIZE;j++){
            if(data[j].rollno<small){
                pos=j;
                small=data[j].rollno;
            }
        }
        if(pos!=i){
            struct student temp=data[pos];
            data[pos]=data[i];
            data[i]=temp;
            scount++;
            ssize+=84;
        }
    }
    for(i=0;i<SIZE;i++){
        printf("%d. %-13s - %d years old\n",data[i].rollno,data[i].name,data[i].age);
    }
    printf("Total number of swaps %d\nTotal data copied %d",scount,ssize);
}

