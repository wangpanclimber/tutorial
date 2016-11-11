#include<stdio.h>
int main()
{
  int A,B,C,D,E,number;
  char a,b,c,d,e;
  scanf("mima:%c%c%c%c%c",&a,&b,&c,&d,&e);
  A='a'+1;
  B='b'+2; 
  C='c'+3; 
  D='d'+4;
  E='e'+5;
  number=sizeof(A);
  printf("%d\n",number);
  printf("bianhua:%c%c%c%c%c",A,B,C,D,E); 
  
 } 
