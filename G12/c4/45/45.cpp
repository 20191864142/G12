// 45.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "math.h"

int main(int argc, char* argv[])
{
	int a,b;
	printf("������һ��С��1000������\n");
	scanf("%d",&a);
	if(a>=1000)
	printf("����������\n");
	else
	b=(int)sqrt((double)a);
	printf("%d\n",b);

	return 0;
}

