// 48.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
int a;
printf("����ѧ���ĳɼ�:\n");
scanf("%d",&a);
if (a<0 || a>100)
{
printf("����!\n");
}
else
{
switch(a/10)
{
case 0:
case 1:
case 2:
case 3:
case 4:
case 5:printf("��ͬѧ�ĵȼ�Ϊ:E\n");break;
case 6:printf("��ͬѧ�ĵȼ�Ϊ:D\n");break;
case 7:printf("��ͬѧ�ĵȼ�Ϊ:C\n");break;
case 8:printf("��ͬѧ�ĵȼ�Ϊ:B\n");break;
case 9:
case 10:printf("��ͬѧ�ĵȼ�Ϊ:A\n");break;
}
}
return  0;
}

