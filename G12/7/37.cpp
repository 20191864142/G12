// 37.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "math.h"

int main(int argc, char* argv[])
{
	double PI=3.1415926,a,b,c,d,e;
	float r,h;
	printf("请输入圆柱高度=");
	scanf("%f",&h);
	printf("请输入底面半径=");
	scanf("%f",&r);
	a=2*r*PI;
	b=pow(r,2)*PI;
	c=4*PI*pow(r,2);
	d=4/3*PI*pow(r,3);
	e=pow(r,2)*h*PI;
	printf("圆周长=%0.2f\n",a);
	printf("圆面积=%0.2f\n",b);
	printf("圆球表面积=%0.2f\n",c);
	printf("圆球体积=%0.2f\n",d);
	printf("圆柱体体积=%0.2f\n",e);
	return 0;
}

