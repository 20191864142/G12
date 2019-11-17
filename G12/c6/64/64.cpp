// 64.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int a[10]={1,2,3,5,7,9,12,34,51},i,k;

	printf("Enter a number:");
	scanf("%d",&k);

	for(i=0;i<=9;i++){
		if(a[i]>k){
			k=a[i];
			for(;i<=9;i++){
				a[i]=a[i+1];
			}
		}
	}
			

	for(i=0;i<=9;i++){
		printf("a[%d]=%d   ",i,a[i]);
	}
	printf("\n");
	return 0;
}

