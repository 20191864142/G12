// pi5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
double p=1,t=1,t1=0,pi;
long a=1,b=3;
while(t-t1>1e-6)
{
t1=t;
t=t*a/b;
p=p+t;
a++;
b=b+2;
}
pi=p*2;
printf("%.16f\n",pi);
	return 0;
}

