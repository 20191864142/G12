// 718.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


void riqi(int x,int y,int z);
int main(int argc, char* argv[])
{
	int x,y,z;


	printf("���������:");
	scanf("%d",&x);

	for(;;){
		printf("�������·�:");
		scanf("%d",&y);
		if(y>0&&y<=12)
			break;
		else
			printf("�����������·�\n");
	}


	printf("����������:");
	scanf("%d",&z);

	

	printf("����Ϊ%d.%d.%d\n",x,y,z);

	riqi(x,y,z);
	return 0;

}


void riqi(int x,int y,int z)
{
	int q,sum;
	switch(y)
	{
	case 1:sum=0;break;
	case 2:sum=31;break;
	case 3:sum=59;break;
	case 4:sum=90;break;
	case 5:sum=120;break;
	case 6:sum=151;break;
	case 7:sum=181;break;
	case 8:sum=212;break;
	case 9:sum=243;break;
	case 10:sum=273;break;
	case 11:sum=304;break;
	case 12:sum=334;break;
	}


	sum=sum+z;


	if(((x%4 == 0&&x%100 != 0)||x%400 == 0)&&y>2){
		q=1;
	}
	else
		q=0;

	sum=sum+q;
		
	
	printf("%d.%d.%d��%d��ĵ�%d��\n",x,y,z,x,sum);


}
