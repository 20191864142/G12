#include<stdio.h>
int main()
{
	int number,a,b,c,d,e,ret;//ret��λ�� 
	printf("������һ����������λ����������:");
	scanf("%d",&number);
	if(number>9999)
		ret=5;
	else if(number>999)
	 	ret=4;
	else if(number>99)
		ret=3;
	else if(number>9)
		ret=2;
	else 
		ret=1;
		printf("λ����%d\n",ret);
	a=number/10000;
  b=(number-a*10000)/1000;
  c=(number-a*10000-b*1000)/100;
  d=(number-a*10000-b*1000-c*100)/10;
  e=(number-a*10000-b*1000-c*100-d*10);
  switch(ret){
  case 5:
  	printf("ÿһλ����Ϊ��%d%d%d%d%d\n",a,b,c,d,e);
  	printf("��������Ϊ��%d%d%d%d%d",e,d,c,b,a);
  	break;
case 4:
	printf("ÿһλ����Ϊ��%d%d%d%d\n",b,c,d,e);
		printf("��������Ϊ��%d%d%d%d",e,d,c,b);
			break;
case 3:
	printf("ÿһλ����Ϊ��%d%d%d\n",c,d,e);
	printf("��������Ϊ��%d%d%d",e,d,c);
		break;
case 2:
	printf("ÿһλ����Ϊ��%d%d\n",d,e);
		printf("��������Ϊ��%d%d",e,d);
			break;
case 1:
	printf("ÿһλ����Ϊ��%d\n",e);
		printf("��������Ϊ��%d%d",e); 
		break;
	}
	return 0;
}
