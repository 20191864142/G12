// 52.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "math.h"

int main(int argc, char* argv[])
{
	int sign=1,i=1;
	double pi=0.0,n=1.0,term=1.0;

	while(fabs(term)>=1e-6)
	{
		i++;
		pi=pi+term;
		n=n+2;
		sign=-sign;
		term=sign/n;
	}

	pi=pi*4;
	printf("pi=%10.8f\n",pi);
	printf("times:%d\n",i);
	return 0;
}

