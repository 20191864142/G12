#include <stdio.h>
int main()
{ char a[9]={'*',' ','*',' ','*',' ','*',' ','*'};
  int i,j,k;
  char space=' ';
  for (i=0;i<5;i++)
   { printf("\n");
     printf("    ");
     for (j=1;j<=i;j++)
       printf("%c",space);
     for (k=0;k<10;k++)
       printf("%c",a[k]);
   }
  printf("\n");
  return 0;
}
