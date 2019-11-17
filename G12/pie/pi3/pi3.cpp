// pi3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "math.h"

int main(int argc, char* argv[])
{
	double n=1.0,term=1.0,pi=0.0;
	while(fabs(term)>1e-6)
	{
		pi=pi+term;
		n=n+1;
		term=1/(n*n);
	}
	pi=sqrt(pi*6);
	printf("%.16f\n",pi);

	return 0;
}

