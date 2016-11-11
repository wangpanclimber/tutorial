#include<stdio.h>
int main ()
{
  int i,j,s;
  for(i=1;i<=4;)
  {
  	s=i;
    printf("%5d",s);
    for(j=2;j<=4;)
    {
      s=i*j;
      printf("%5d",s);
      j=j+1;
	}
    printf("\n");
    i=i+1;
  } 
} 
