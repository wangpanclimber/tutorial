#include<stdio.h>

int main()
{
  int max(int x,int y);
  int a,b,c,m;
  printf("please enter three thing:");
  scanf("%d,%d,%d",&a,&b,&c);
  m=max(a,max(b,c));
  printf("the most is: %d\n",m); 
 } 
 
 int max(int x,int y)
 {
   int z;
   if(x>=y) z=x;
   else z=y;
   return(z);
 }
