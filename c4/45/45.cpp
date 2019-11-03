// 45.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "math.h"

int main(int argc, char* argv[])
{
	int a,b;
	printf("请输入一个小于1000的数字\n");
	scanf("%d",&a);
	if(a>=1000)
	printf("请重新输入\n");
	else
	b=(int)sqrt((double)a);
	printf("%d\n",b);

	return 0;
}

