// 410.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int I;
	double q;
	printf("请输入利润:");
	scanf("%d",&I);

	if(I<=100000)
		q=(float)I*0.1;
	else if(I>100000&&I<=200000)
		q=(float)(I-100000)*0.075+100000*0.1;
	else if(I>200000&&I<=400000)
		q=(float)(I-200000)*0.05+100000*0.1+100000*0.075;
	else if(I>400000&&I<=600000)
		q=(float)(I-400000)*0.03+200000*0.05+100000*0.1+100000*0.075;
	else if(I>600000&&I<=1000000)
		q=(float)(I-600000)*0.015+200000*0.03+200000*0.05+100000*0.1+100000*0.075;
	else
		q=(float)(I-1000000)*0.01+400000*0.015+200000*0.03+200000*0.05+100000*0.1+100000*0.075;

	printf("应发奖金:%0.2f\n",q);
	return 0;
}

