#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main(){
	int n,i,j;
	n=0;
	char t[1]={','};
	char s[400],r[6][30],*p,*q;
	printf("Enter the string:\t:");
	gets(s);
	printf("The word by word breakup is:\n");
	i=0;
	q=r[i];
	for(p=s;*p!='\0';p++){
		if(*p==','){
		    *q='\0';
		    q=r[++i];
		    continue;
		}
		*q=*p;
		q++;
	}
	*q='\0';
	for(i=0;i<6;i++){
		puts(r[i]);
	}
	int ss,mm,hh,ns,ew,r1;
	float latFloat,lonFloat,altK;

	r1=atoi(r[1]);
	ss=r1%100;
	r1/=100;
	mm=r1%100;
	r1/=100;
	hh=r1%100;
	r1/=100;
	printf("Time is %d:%d:%d\n",hh,mm,ss);

	char lt[5];
	char lg[5];
	p=lt;
	q=lg;
	latFloat=atof(r[2]);
	lonFloat=atof(r[3]);
	ns=strlen(r[2])-1;
	ew=strlen(r[3])-1;
	if(r[2][ns]=='N'){
		strcpy(p,"NORTH");
	}
	if(r[2][ns]=='S'){
		strcpy(p,"SOUTH");
	}
	if(r[3][ew]=='E'){
		strcpy(q,"EAST");
	}
	if(r[3][ew]=='W'){
		strcpy(q,"WEST");
	}
	printf("Latitude: %.2f %s\nLongitude: %.2f %s\n",latFloat,lt,lonFloat,lg);

	altK=atof(r[5])/1000;
	printf("Altitude is: %.3f\n",altK);
}
