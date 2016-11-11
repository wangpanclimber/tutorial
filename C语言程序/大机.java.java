public class Course 
{ 
  public static void main (String[]args)
   {
	int[]one={1,2,3};
	int[]two={2,3};
	int[]three={2,3,4};
	int[]four={1,2,4};
	for(int num1=0;num1<one.length;num1++)
	 for(int num2=0;num2<two.length;num2++)
	  for(int num3=0;num3<three.length;num3++)
	   for(int num4=0;num4<four.length;num4++)
		{
		 if(one[num1]+two[num2]+three[num3]+four[num4]==10)
		  if(one[num1]!=two[num2]&&one[num1]!=three[num3])
		   if(two[num2]!=three[num3])
			{ System.out.print("小强");
			  switch(one[num1]){
			  case 1:System.out.println('A');break;
			  case 2:System.out.println('B');break;
			  case 3:System.out.println('C');break;
			  case 4:System.out.println('D');break;
			  }
			  System.out.print("小明");
			  switch(two[num2]){
			  case 1:System.out.println('A');break;
			  case 2:System.out.println('B');break;
			  case 3:System.out.println('C');break;
			  case 4:System.out.println('D');break;
			  } 
			  System.out.print("小芳");
			  System.out.println('E');
			  System.out.print("小红");
			  switch(three[num3]){
			  case 1:System.out.println('A');break;
			  case 2:System.out.println('B');break;
			  case 3:System.out.println('C');break;
			  case 4:System.out.println('D');break;
			  } 
			  System.out.print("小刚");
			  switch(four[num4]){
			  case 1:System.out.println('A');break;
			  case 2:System.out.println('B');break;
			  case 3:System.out.println('C');break;
			  case 4:System.out.println('D');break;
			  }
			  System.out.println();
		    }
	    }
    }
}


