// Fuckingshuixianhua.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "math.h"
#include "time.h"

int main(int argc, char* argv[])
{
	int n;
	int a[9],i,b[9];
	long t0,t1;

	t0 = clock();
	for(n=100;n<=999999999;n++){
		b[0]=n%10;
		b[1]=n/10%10;
		b[2]=n/100%10;
		b[3]=n/1000%10;
		b[4]=n/10000%10;
		b[5]=n/100000%10;
		b[6]=n/1000000%10;
		b[7]=n/10000000%10;
		b[8]=n/100000000%10;
		
		if(n<1000){
			for(i=0;i<3;i++){
				a[i]=(int)pow(b[i],3);
			}
			if(n==a[0]+a[1]+a[2])
				printf("%d ",n);
		}

		if(n>1000&&n<10000){
			for(i=0;i<4;i++){
				a[i]=(int)pow(b[i],4);
			}
			if(n==a[0]+a[1]+a[2]+a[3])
				printf("%d ",n);
		}

		if(n>10000&&n<100000){
			for(i=0;i<5;i++){
				a[i]=(int)pow(b[i],5);
			}
			if(n==a[0]+a[1]+a[2]+a[3]+a[4])
				printf("%d ",n);
		}

		if(n>100000&&n<1000000){
			for(i=0;i<6;i++){
				a[i]=(int)pow(b[i],6);
			}
			if(n==a[0]+a[1]+a[2]+a[3]+a[4]+a[5])
				printf("%d ",n);
		}

		if(n>1000000&&n<10000000){
			for(i=0;i<7;i++){
				a[i]=(int)pow(b[i],7);
			}
			if(n==a[0]+a[1]+a[2]+a[3]+a[4]+a[5]+a[6])
				printf("%d ",n);
		}

		if(n>10000000&&n<100000000){
			for(i=0;i<8;i++){
				a[i]=(int)pow(b[i],8);
			}
			if(n==a[0]+a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7])
				printf("%d ",n);
		}

		if(n>100000000&&n<1000000000){
			for(i=0;i<9;i++){
				a[i]=(int)pow(b[i],9);
			}
			if(n==a[0]+a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]+a[8])
				printf("%d ",n);
		}

		t1 = clock();


	}

	printf("\n");

	printf("%10.2f seconds\n",(t1-t0)/(float)CLOCKS_PER_SEC);

	return 0;
}

/* 
i7-9750h 以最高频率运行耗时525.11s
*/