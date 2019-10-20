// 33.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "cmath"

int main(int argc, char* argv[])
{
	double m;
	float r=0.01f;
	int d=300000,p=6000;
	m=log(p/(p-d*r))/log(1+r);
		printf("%0.1f\n",m);
	return 0;
}

