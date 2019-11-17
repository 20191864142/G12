// 65.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int a[10]={1,2,3,4,5,6,7,8,9,10},b[10],i,j;

	for(i=0;i<=9;i++){
		printf("a[%d]=%d  ",i,a[i]);
	}

	printf("\n");
	for(i=0;i<=90;i++){
		b[9-i]=a[i];
	}

		

	for(j=0;j<=9;j++){
		printf("b[%d]=%d  ",j,b[j]);
	}
	printf("\n");
	return 0;
}

