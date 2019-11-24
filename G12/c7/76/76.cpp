// 76.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "string.h"


void connect(char x[],char y[]);
int main(int argc, char* argv[])
{
	char i[50],j[50];
	printf("i[]=");
	gets(i);
	printf("j[]=");
	gets(j);
	connect(i,j);
	printf("\n");
	return 0;
}

void connect(char x[],char y[])
{
	printf("%s",strcat(x,y));
}