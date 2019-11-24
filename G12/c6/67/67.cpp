#include"stdio.h"
#include "stdafx.h" 
void main(void)
{
	int a[15][15]={0};
	int i,j,k,n,p=1;
  while(p==1)
  {  
	  printf("请输入一个奇数n(1到15之内):");  
	  scanf("%d",&n); 
	  if((n>0) && (n<=15) && (n%2!=0))  
		  j=n/2; 
	  a[0][j]=1;  
	  i=0; j=n/2;
	  for(k=2;k<=n*n;k++)
	  {  
		  i=i-1; 
		  j=j+1; 
		  if(i<0)  
			  i=n-1;
		  if(j>(n-1)) 
			  j=0;  
		  a[i][j]=k;  
		  if(k%n==0)  
		  { 
			  a[++i][j]=++k;  
	  } 
	  }
	  printf("魔方阵：/n"); 
	  for (i=0;i<n;i++) 
	  {  for(j=0;j<n;j++) 
	  {   printf("%4d",a[i][j]);  }
	  printf("/n"); } printf("/n");
}
