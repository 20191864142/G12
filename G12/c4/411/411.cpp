// 411.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int w,x,y,z,max;


	scanf("%d,%d,%d,%d",&w,&x,&y,&z);

	if (w>x&&w>y&&w>z)
		max=w;
	else if (x>w&&x>y&&x>z)
		max=x;
	else if (y>w&&y>x&&y>z)
		max=y;
	else
		max=z;




	printf("max=%d\n",max);
	return 0;
}

