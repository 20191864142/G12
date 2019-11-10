// 46.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int x;
	scanf("%d",&x);
	if(x<1)
	printf("%d\n",x);
	else
	if(x>=10)
	printf("%d\n",3*x-11);
	else
		printf("%d\n",2*x-1);

	return 0;
}

