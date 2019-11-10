// 55.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{

	int x=1,a,n,S=0,y=1,z;
	printf("输入一个数字:");
	scanf("%d",&a);

	printf("输入位数:");
	scanf("%d",&n);

	z=a;

	while(x<=n){
		S=S+a;
		a=a*10+z;
		x++;
	}


	printf("S=%d\n",S);
	return 0;
}

