// 410switch.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	void action1(int),action2(int),action3(int),action4(int),action5(int),action6(int);
	int I,x;
	printf("请输入利润:");
	scanf("%d",&I);
	
	


	if (I<=100000)
		x=1;
	else if (I>100000&&I<=200000)
		x=2;
	else if (I>200000&&I<=400000)
		x=3;
	else if (I>400000&&I<=600000)
		x=4;
	else if (I>600000&&I<=1000000)
		x=5;
	else 
		x=6;

	
	switch(x)
	{
	case 1:action1(I);break;
	case 2:action2(I);break;
	case 3:action3(I);break;
	case 4:action4(I);break;
	case 5:action5(I);break;
	case 6:action6(I);break;
	}

	return 0;
}


void action1(int I)
{
	printf("应发奖金:%0.2f\n",(float)I*1);
}

void action2(int I)
{
	printf("应发奖金:%0.2f\n",(float)(I-100000)*0.075+100000*0.1);
}

void action3(int I)
{
	printf("应发奖金:%0.2f\n",(float)(I-200000)*0.05+100000*0.1+100000*0.075);
}

void action4(int I)
{
	printf("应发奖金:%0.2f\n",(float)(I-400000)*0.03+200000*0.05+100000*0.1+100000*0.075);
}

void action5(int I)
{
	printf("应发奖金:%0.2f\n",(float)(I-600000)*0.015+200000*0.03+200000*0.05+100000*0.1+100000*0.075);
}

void action6(int I)
{
	printf("应发奖金:%0.2f\n",(float)(I-1000000)*0.01+400000*0.015+200000*0.03+200000*0.05+100000*0.1+100000*0.075);
}

