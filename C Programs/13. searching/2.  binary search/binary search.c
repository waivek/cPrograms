#include<stdio.h>
#define SIZE 100

int a[SIZE];
int acSize=0;
int ccount=0;

int bin_search(int );
void fillArr(int* );

main(){
    fillArr(a);
    int pos=0;
    int key=0;
    printf("Search Item ");
    scanf("%d",&key);
    pos=bin_search(key);
    printf("Pos %d\n",pos);
    printf("Comp %d\n",ccount);
}
void fillArr(int *p){
    printf("Enter -1 to stop entering.\n");
    int i=0;
    while(1){
        int x=0;
        printf("? ");
        scanf("%d",&x);
        if(x==-1) break;
        *p=x;
        p++;
        i++;
    }
    acSize=i;
    *p='\0';
}

int bin_search(int x){
    int beg=0;
    int fin=acSize-1;
    while(beg<=fin){
        int mid=(beg+fin)/2;
        ccount++;
        if(a[mid]==x){
            return mid;
        }
        if(x>a[mid]){
            beg=mid+1;
        }
        if(x<a[mid]){
            fin=mid-1;
        }
    }
    return -1;
}
