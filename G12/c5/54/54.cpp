// 54.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	char c;
	int English=0,empty=0,number=0,point=0;
	printf("������һ���ַ�:");
	while((c=getchar())!='\n')
	{
		if (c>='a'&&c<='z'||c>='A'&&c<='Z')
			English++;
		else if (c==' ')
			empty++;
		else if (c>='0'&&c<='9')
			number++;
		else
			point++;
	}


			
	printf("��ĸ��:%d\n�ո���:%d\n������:%d\n�����ַ���:%d\n",English,empty,number,point);
	return 0;
}

