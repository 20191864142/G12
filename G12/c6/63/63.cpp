// 63.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int a[3][3],sum=0,i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter the number a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
    sum=a[0][0]+a[1][1]+a[2][2]+a[0][2]+a[1][1]+a[2][2];
	printf("sum=%d\n",sum);
	return 0;
}

