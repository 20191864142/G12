// prime.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "time.h"






int		is_prime(int n);


int main(int argc, char* argv[])
{
	int		n, m;
	int		total = 0;
	long t0,t1;


	printf("input a number:");
	scanf("%d", &m);

	t0 = clock();


	for(n=2;n<=m;n++) {

		if ( is_prime(n) ) {
			//printf("%-4d ", n);
			total ++;
		}
	}

	t1 = clock();



	printf("\nTotal prime numbers between 2 and %d: %d\nTime used:%10.2f.seconds\n", m, total,(t1-t0)/(float)CLOCKS_PER_SEC);


	return 0;
}


int		is_prime(int n)
{
	int		i;
	int		flag = 1;


	for(i=2;i<=n/2;i++) {
		if (n%i==0) {
			flag = 0;
			break;

			}
		}

	return flag;
}




/*
	用时55.17s 找到素数78498
*/
