// 78.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void shuchu(char x[]);
int main(int argc, char* argv[])
{
	
	char a[4];
	gets(a);
	putchar('"');
	shuchu(a);
	putchar('"');
	return 0;
}


void shuchu(char x[])
{
	int i;
	for(i=0;i<4;i++){
		printf("%c",x[i]);
		if(i>-1&&i<3)
			printf(" ");
	}
}

