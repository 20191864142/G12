// 53.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

int main(int argc, char* argv[])
{
	int m,n,a,i;

	printf("m = ");
	scanf("%d",&m);

	printf("n = ");
	scanf("%d",&n);

	for(a=n;;a--){
		if(m%a==0&&n%a==0)
			break;
	}


		for(i=n;i<=m*n;i++)
		{
			if(i%n==0&&i%m==0)
				break;
		}



	printf("最大公约数=%d  最小公倍数=%d\n",a,i);
	return 0;
}

