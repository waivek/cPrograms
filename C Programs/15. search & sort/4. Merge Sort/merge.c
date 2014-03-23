#include<stdio.h>
//#define MAX 100
mergeArrays( int[MAX]  , int[MAX]  , int , int[MAX] , int  );
// main(){
// 	int a[ MAX ] = {2,4,6,8,10};
// 	int b[ MAX ] = {1,3,5,7,9,11,12,13};
// 	int aMax = 5;
// 	int bMax = 8;
// 	int c[ MAX ];
// 	mergeArrays( c , a , aMax , b , bMax );
// 	int i;
// 	for( i=0 ; i < aMax + bMax ; i++ ){
// 		printf("%9d", c[i] );
// 	}
// 	putchar('\n');
// }

mergeArrays( int c[MAX] , int a[MAX] , int aMax, int b[MAX], int bMax ){
	int ia,ib,i;
	ia = ib = 0;

	while( ia < aMax || ib < bMax){
        if(ib!=bMax)
			if( ia>=aMax ||  b[ib] < a[ia]  ){
				c[ia + ib] = b[ib];
				ib++;
			}
		if(ia!=aMax)
			if( ib>=bMax || a[ia] < b[ib]  ){
				c[ia + ib] = a[ia];
				ia++;
			}
	}
}
