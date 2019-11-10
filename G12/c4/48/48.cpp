// 48.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
int a;
printf("输入学生的成绩:\n");
scanf("%d",&a);
if (a<0 || a>100)
{
printf("错误!\n");
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
case 5:printf("该同学的等级为:E\n");break;
case 6:printf("该同学的等级为:D\n");break;
case 7:printf("该同学的等级为:C\n");break;
case 8:printf("该同学的等级为:B\n");break;
case 9:
case 10:printf("该同学的等级为:A\n");break;
}
}
return  0;
}

