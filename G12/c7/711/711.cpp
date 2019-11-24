// 711.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void max(int a[]);
int main(int argc, char* argv[])
{
	int a[10],i;
	for(i=0;i<=9;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	max(a);
	return 0;
}


void max(int a[])
{
	int i,j,t;
	for(i=0;i<=9;i++)
		for(j=0;j<=9-i;j++)
			if(a[j]>a[j+1]){
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
			for(i=0;i<=9;i++){
				printf("%d  ",a[i]);
			}
}

