// 37.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "math.h"

int main(int argc, char* argv[])
{
	double PI=3.1415926,a,b,c,d,e;
	float r,h;
	printf("������Բ���߶�=");
	scanf("%f",&h);
	printf("���������뾶=");
	scanf("%f",&r);
	a=2*r*PI;
	b=pow(r,2)*PI;
	c=4*PI*pow(r,2);
	d=4/3*PI*pow(r,3);
	e=pow(r,2)*h*PI;
	printf("Բ�ܳ�=%0.2f\n",a);
	printf("Բ���=%0.2f\n",b);
	printf("Բ������=%0.2f\n",c);
	printf("Բ�����=%0.2f\n",d);
	printf("Բ�������=%0.2f\n",e);
	return 0;
}

