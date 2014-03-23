#include<stdio.h>
//#define MAX 100
assignArray( int* targetArray, int limit, int* sourceArray );
// main(){
// 	int a[ MAX ], b[ MAX ];
// 	int c[ MAX ] = {1,2,3,4,5,6,7,8,9};
// 	int cSize = 9;
// 	int aSize = cSize / 2;
// 	int bSize = cSize - aSize;
// 	assignArray( a, aSize, c);
// 	assignArray(b, bSize, c + aSize);
// 	int i;
// 	for( i=0 ; i < aSize; i++ ){
// 		printf("%d\t", a[i] );
// 	}
// 	putchar('\n');
// 	for( i=0 ; i < bSize; i++ ){
// 		printf("%d\t", b[i] );
// 	}
// 	putchar('\n');
//}

assignArray( int* targetArray, int limit, int* sourceArray ){
	int i;
	for( i = 0; i < limit; i++){
		*targetArray = *sourceArray;
		targetArray++;
		sourceArray++;
	}
}
