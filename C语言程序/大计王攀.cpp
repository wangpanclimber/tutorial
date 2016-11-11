#include <iostream>

using namespace std;

int table[5][5]={
            {1,1,1,0,0},
            {0,1,1,0,0},
            {1,0,0,1,1},
            {0,1,1,1,0},
            {1,1,0,1,0}
};
//函数f用来比较产生的方案是否成立
int f(int a[5][5],int b[5][5]){
    int temp[5]={0,0,0,0,0};//temp数组标记每一行是否存在选择
    for(int i=0;i<5;i++){//
        for(int j=0;j<5;j++){//
            if(b[i][j]==1&&a[i][j]==1){//比较数组a，b对应元素值，若存在对应位置同时为1，与该行对应的temp数组元素置1
                temp[i]=1;
                break;
            }
        }
    }
    for(int i=0;i<5;i++){
    if(temp[i]==0)//如果temp每个元素都为1，说明此方案成立
        return 0;
    }
    return 1;
}
//此函数判断数组arr的某个位置是否能置1，即对应行的人选择对应列的课程，使得所有1既不同行也不同列
int judge(int row,int col,int arr[5][5]){
    int row_tmp,col_tmp;
    for(row_tmp=0;row_tmp<row;row_tmp++){
        for(int j=0;j<5;j++){
            if(arr[row_tmp][j]==1&&col==j)//检测是否与之前行有冲突
                return 0;
        }
        //if(col==col_tmp)
        //    return 0;
    }
    return 1;
}
//此函数产生可能的结果，并与限制条件比较，成立则输出
void place_one(int row,int arr[5][5])
{
    static int count=0;//统计方案个数
   for(int col=0;col<5;col++)
   {
       if(judge(row,col,arr))//判断该位置能否置1，即对应行的人选择对应列的课程
       {
           arr[row][col]=1;//可以则置1
           if(row<4)
            place_one(row+1,arr);//递归逐步产生方案
           else {
                if(f(table,arr)){//该方案成立则输出
                    cout<<"第"<<++count<<"个:"<<endl;//方案成立count加1
                    for(int i=0;i<5;i++){
                        for(int j=0;j<5;j++){
                            cout<<arr[i][j]<<" ";
                        }
                        cout<<endl;
                    }
                    cout<<endl;
                }
            }
       }
      // for(int i=0;i<5;i++)
       arr[row][col]=0;//若某方案不成立，说明该行的这列不能置1
   }
}
int main()
{
    int arr[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            arr[i][j]=0;
            }
        }
    place_one(0,arr);
    return 0;
}
