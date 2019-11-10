// 44.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{

	int a,b,c,d;
	scanf("%d,%d,%d",&a,&b,&c);
	if(a>b)
	d=a;
	else
	d=b;
	if(b>c)
	printf("%d\n",b);
	else
	printf("%d\n",c);
	return 0;

}

