// 31.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "math.h"

int main(int argc, char* argv[])
{
	int n;
	printf("输入年份=");
	scanf("%d",&n);
	double p,r=7/100.0;
	p=pow(1+r,n);
	printf("%d年后增长%f%%\n",n,p*100);
	return 0;
}

