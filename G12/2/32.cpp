// 32.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "math.h"
int main(int argc, char* argv[])
{
	double p1,p2,p3,p4,p5;
	p1=1000*pow(1+0.03,5);
	printf("һ�δ�5��=%f\n",p1);
	p2=1000*pow(1+0.021,2)*pow(1+0.0275,3);
	printf("�ȴ�2�꣬�ٴ�3��=%f\n",p2);
	p3=1000*pow(1+0.0275,3)*pow(1+0.021,2);
	printf("�ȴ�3�꣬�ٴ�2��=%f\n",p3);
	p4=1000*pow(1+0.015,5);
	printf("��������5��=%f\n",p4);
	p5=1000*pow(1+0.0035,5);
	printf("���ڴ��5��=%f\n",p5);
	return 0;
}

