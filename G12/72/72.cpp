// 72.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "math.h"

void erci(double a,double b,double c);
int main(int argc, char* argv[])
{
	double a,b,c;
	printf("ax^2+bx+c=0\n");
	printf("������a:");
	scanf("%lf",&a);
	printf("������b:");
	scanf("%lf",&b);
	printf("������c:");
	scanf("%lf",&c);
	erci(a,b,c);
	printf("\n");
	printf("a=%0.3lf  b=%0.3lf  c=%0.3lf",a,b,c);
	printf("\n");
	return 0;
}


void erci(double a,double b,double c){

	double x,i,j;
	x=b*b-4*a*c;
	if(x>0){
		printf("�ú�����������=");
		i=(-b+sqrt(x))/2*a;
		j=(-b-sqrt(x))/2*a;
		printf("%0.4lf  %0.4lf",i,j);
	}
	else if(x==0){
		printf("�ú�����������ȵĸ�=");
		i=(-b)/2*a;
		printf("%0.4lf",i);
	}
	else{
		printf("�ú����޸�");
	}
}
