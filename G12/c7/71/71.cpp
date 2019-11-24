// 71.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void action1(int x,int y);
void action2(int x,int y);
int main(int argc, char* argv[])
{
	int x,y;
	printf("putinto x:");
	scanf("%d",&x);
	printf("putinto y:");
	scanf("%d",&y);
	action1(x,y);
	printf("\n");
	action2(x,y);
	printf("\n");
	return 0;
}


void action1(int x,int y)
{
	int a;
	for(a=x;;a--){
		if(y%a==0&&x%a==0)
			break;
	}
	printf("最大公因数:%d",a);

}

void action2(int x,int y)
{
	int i;
	for(i=x;i<=y*x;i++)
	{
		if(i%x==0&&i%y==0)
			break;
	}
	printf("最小公倍数:%d",i);

}
