#include<stdio.h>;
#include<math.h>; 
int main()
{
 float p,r=9/100;
 int n;
 printf("year:");
 scanf("%d",&n);
 p=pow(1+r,n);
 printf("p=%f",p);
 
 } 
