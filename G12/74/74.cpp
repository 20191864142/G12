// 74.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"

void change(int b[3][3]);
int main(int argc, char* argv[])
{
	int b[3][3],i,j,k=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("b[%d][%d]=",i,j);
			scanf("%d",&b[i][j]);
			system("cls");
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("b[%d][%d]=%d  ",i,j,b[i][j]);
			k++;
			if(k%3==0){
				printf("\n");
				printf("\n");
			}
		}
	}
	printf("行列互换以后\n");
	putchar('\n');
	change(b);

	return 0;
}


void change(int b[3][3]){
	int x,y,a[3][3],k=0;
	for(x=0;x<3;x++)
		for(y=0;y<3;y++){
			a[2-x][2-y]=b[x][y];
		}
	for(x=0;x<3;x++){
		for(y=0;y<3;y++){
			printf("b[%d][%d]=%d  ",x,y,a[x][y]);
			k++;
			if(k%3==0){
				printf("\n");
				printf("\n");
			}
		}
	}
			

}