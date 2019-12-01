// 73.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	void print_message1();
	void print_message2();
	int	i,n;
	scanf("%d",&n);
	for(i=2;i<=n-1;i++)
	{
		if(n%i==0)
		break;
	}
		if(i<n)
		print_message1();
		else
		print_message2();	
		return	0;
}
void	print_message1()
{
	printf("这是一个素数\n");
}
void	print_message2()
{
	printf("这不是一个素数\n");
}