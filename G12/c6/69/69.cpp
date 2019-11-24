// 69.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include "stdafx.h" 
int main()
{
    int n[15] = {15,14,13,12,11,10,9, 8,7,6,5,4,3,2,1};
    int num, low, high, mid;
    for (low=0, high=14, printf("Please enter number: "), scanf("%d", &num); low<=high;){
        mid=(low+high)/2;
        if (num>n[mid]) high=mid-1;
        else if (num<n[mid]) low=mid+1;
        else{
            printf("%d is No.%d number!\n", num, mid+1);
            break;
        }
    }
    if (num!=n[mid]) printf("ÎÞ´ËÊý!\n");
    return 0;
}
