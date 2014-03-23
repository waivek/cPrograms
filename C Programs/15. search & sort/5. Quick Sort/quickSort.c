#include<stdio.h>
#define MAX 100
struct field{
    char data[30];
    int i;
}a[MAX]={"APPLE" , 1,
        "ORANGE", 2,
        "BANANA", 3,
        "GUAVA", 4,
        "CHIKU", 5};
main(){
    printf("Original array is \n");
    display();
    printf("Continue?\n");
    getch();
    quickSort(0,5);
    printf("Sorted array is \n");
    display();
}
display(){
    int i;
    for( i = 0; i < 5; i ++){
        printf("Title = %30s Offset = %8d\t \n",a[i].data, a[i].i);
    }
    //putchar('\n');
}
quickSort(int low, int high){
    int pivotLocation;
    if ( low < high ){
        pivotLocation = partitionArray( low, high );
        quickSort( low, pivotLocation);
        quickSort( pivotLocation + 1, high);
    }
}

int partitionArray(int low, int high){
    int mid, lastSmall, i;
    struct field t, pivot;
    mid = (low + high)/2;

    t = a[mid];
    a[mid] = a[low];
    a[low] = t;
    pivot = a[low];
    lastSmall = low;
    for ( i = low + 1; i < high; i++ ) {
        if ( strcmp( a[i].data , pivot.data ) < 0 ){
            lastSmall++;
            t = a[i];
            a[i] = a[lastSmall];
            a[lastSmall] = t;
        }
    }
    t = a[lastSmall];
    a[lastSmall] = a[low];
    a[low] = t;
    return lastSmall;
}
