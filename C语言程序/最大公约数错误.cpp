#include<stdio.h>
int main()
{int zuiyue(int x,int y);//�������Լ�� 
 int zuibei(int x,int y);//������С������
 int a,b,c,d;
 scanf("%d,%d",&a,&b);//���������� 
 c=zuiyue(a,b);
 d=zuibei(a,b);
 printf("%d,%d",c,d);//��������� 
 } 
 
 //�����Լ���ĺ��� 
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
  
  
  //�����ֵ���� 
int max(int g,int h)
{int z;
 if(g>=h) z=g;
 else z=h;
 return(z);
}

//����С������ 
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

//����Сֵ���� 
int min(int g,int h)
{int z;
 if(g<=h) z=g;
 else z=h;
 return(z);
}
   
