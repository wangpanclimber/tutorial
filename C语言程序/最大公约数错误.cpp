#include<stdio.h>
int main()
{int zuiyue(int x,int y);//定义最大公约数 
 int zuibei(int x,int y);//定义最小公倍数
 int a,b,c,d;
 scanf("%d,%d",&a,&b);//输入两个数 
 c=zuiyue(a,b);
 d=zuibei(a,b);
 printf("%d,%d",c,d);//输出两个数 
 } 
 
 //求最大公约数的函数 
 int zuiyue (int x,int y) 
 {
  int i,n;
  int min(int g,int h);
  for(i=min(x,y);i>=1;)
    {
	 if((x%i==0)&&(y%i==0))
	  {n=i;
	   break;
	  }   
	}
  return(n); 
 } 
  
  
  //求最大值函数 
int max(int g,int h)
{int z;
 if(g>=h) z=g;
 else z=h;
 return(z);
}

//求最小公倍数 
int zuibei(int x,int y)
{int i,n;
 int max(int g,int h);
 i=max(x,y);
 for(i;i<=x*y;i++)
   {
    if(i%x==0&&i%y==0)
      {n=i;
	   break; 
      }
      
   }
 return(n);
}

//求最小值函数 
int min(int g,int h)
{int z;
 if(g<=h) z=g;
 else z=h;
 return(z);
}
   
