// 77.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "string.h"

char yuanyin(char x[],char y[]);
int main(int argc, char* argv[])
{
	char a[20],b[20];
	gets(a);
	b[20]=yuanyin(a,b);
	puts(b);
	return 0;
}

char yuanyin(char x[],char y[])
{
	int i=0,j=0,k;
	k=strlen(x);
	for(;i<k;i++){
		if(x[i]=='a'||x[i]=='A')
			y[j++]=x[i];
		else if(x[i]=='e'||x[i]=='E')
			y[j++]=x[i];
		else if(x[i]=='i'||x[i]=='I')
			y[j++]=x[i];
		else if(x[i]=='o'||x[i]=='O')
			y[j++]=x[i];
		else if(x[i]=='u'||x[i]=='U')
			y[j++]=x[i];
		}
	y[j]='\0';
	return y[j];
}