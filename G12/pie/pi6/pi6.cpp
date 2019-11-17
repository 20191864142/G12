// pi6.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "math.h"

int main(int argc, char* argv[])
{
double t=sqrt(2),p=1,pi;
while(1/t>1e-6)
{
p=p/t;
t=sqrt(2+t);
}
pi=2*p;
printf("%.16f\n",pi);
	return 0;
}

