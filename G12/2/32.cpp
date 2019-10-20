// 32.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "math.h"
int main(int argc, char* argv[])
{
	double p1,p2,p3,p4,p5;
	p1=1000*pow(1+0.03,5);
	printf("一次存5年=%f\n",p1);
	p2=1000*pow(1+0.021,2)*pow(1+0.0275,3);
	printf("先存2年，再存3年=%f\n",p2);
	p3=1000*pow(1+0.0275,3)*pow(1+0.021,2);
	printf("先存3年，再存2年=%f\n",p3);
	p4=1000*pow(1+0.015,5);
	printf("连续单存5年=%f\n",p4);
	p5=1000*pow(1+0.0035,5);
	printf("活期存款5年=%f\n",p5);
	return 0;
}

