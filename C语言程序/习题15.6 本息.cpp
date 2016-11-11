#include<stdio.h>;
#include<math.h>; 
int main()
{
 float pa,pb,pc,pd,pf,m;
 printf("money: ");
 scanf("%f",&m);
 pa=m*(1+5*0.0585);
 pb=(m*(1+0.0468)^2)*((1+0.054)^3);
 pc=000;
 pd=m*((1+0.0414)^5);
 pf=m*((1+0.0072/4)^20);
 printf("pa=%f\npb=%f\npc=%f\npd=%f\npf=%f",pa,pb,pc,pd,pf);
 } 
