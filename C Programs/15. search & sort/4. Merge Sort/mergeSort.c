#include<stdio.h>
#define MAX 100
#include"merge.c"
#include"assign.c"
mergeSort(int* a, int length);
main(){
	int a[MAX] = {9,2,13,7,4,8};
	int length = 6;
	mergeSort( a, length );
	printf( "Sorted array is ");
	int i;
	for( i=0 ; i < length ; i++ ){
		printf("%d\t", a[i] );
	}
	putchar('\n');
}
mergeSort(int* a, int length){
	if( length > 1){
		int fh[MAX],sh[MAX], fhSize, shSize;
		fhSize = length / 2;
		shSize = length - fhSize;

		assignArray(fh,fhSize,a);
		assignArray(sh,shSize, a + fhSize);
		mergeSort( fh, fhSize);
		mergeSort( sh, shSize);
		mergeArrays(a, fh, fhSize, sh, shSize);

	}
}
