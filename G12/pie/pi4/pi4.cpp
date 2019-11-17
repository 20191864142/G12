// pi4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	double pi,i,j,n,m;
	for(i=1.0,n=1.0;i<=1000;i+=2)
	{
	n=n*(i+1)/i;}
	for(j=3.0,m=1.0;j<=1000;j+=2)
	{
	m=m*(j-1)/j;}
	pi=2.0*m*n;
	printf("%.16f\n",pi);
	return 0;
}

