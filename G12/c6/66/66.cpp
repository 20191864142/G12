// 66.cpp : Defines the entry point for the console application.
//

#include <stdio.h>

#include "stdafx.h" 
int main()
{
    int a[11][11];
    int n, m;
    for (n=1; n<=10; n++){
        for (m=1; m<=10; m++){
            if (m==1)
                a[n][m]= 1;
            else if (m>n){
                a[n][m]=0;
                break;
            }
            else
                a[n][m]=a[n-1][m-1]+a[n-1][m];
            if (a[n][m]!=0)
                printf("%d ", a[n][m]);
        }
        printf("\n");
    }
    return 0;
}
