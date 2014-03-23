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
    int sizeStruct = sizeof(struct student);
    int i,j, countComp=0,memCop=0;
    for(i=1;i<SIZE;i++){
        int x=data[i].rollno;
        memCop++;
        for(j=i;x<data[j-1].rollno&&j!=0;j--){
            data[j].rollno=data[j-1].rollno;
            memCop++;
            countComp++;
        }
        data[j].rollno=x;
        memCop++;
    }
    for(i=0;i<SIZE;i++){
        printf("%d. %-13s - %d years old\n",data[i].rollno,data[i].name,data[i].age);
    }
    printf("Total number of comparisons %d\nTotal data copied %d*%d = %d",countComp,memCop,sizeStruct,memCop*sizeStruct);
}

