#include <iostream>

using namespace std;

int table[5][5]={
            {1,1,1,0,0},
            {0,1,1,0,0},
            {1,0,0,1,1},
            {0,1,1,1,0},
            {1,1,0,1,0}
};
//����f�����Ƚϲ����ķ����Ƿ����
int f(int a[5][5],int b[5][5]){
    int temp[5]={0,0,0,0,0};//temp������ÿһ���Ƿ����ѡ��
    for(int i=0;i<5;i++){//
        for(int j=0;j<5;j++){//
            if(b[i][j]==1&&a[i][j]==1){//�Ƚ�����a��b��ӦԪ��ֵ�������ڶ�Ӧλ��ͬʱΪ1������ж�Ӧ��temp����Ԫ����1
                temp[i]=1;
                break;
            }
        }
    }
    for(int i=0;i<5;i++){
    if(temp[i]==0)//���tempÿ��Ԫ�ض�Ϊ1��˵���˷�������
        return 0;
    }
    return 1;
}
//�˺����ж�����arr��ĳ��λ���Ƿ�����1������Ӧ�е���ѡ���Ӧ�еĿγ̣�ʹ������1�Ȳ�ͬ��Ҳ��ͬ��
int judge(int row,int col,int arr[5][5]){
    int row_tmp,col_tmp;
    for(row_tmp=0;row_tmp<row;row_tmp++){
        for(int j=0;j<5;j++){
            if(arr[row_tmp][j]==1&&col==j)//����Ƿ���֮ǰ���г�ͻ
                return 0;
        }
        //if(col==col_tmp)
        //    return 0;
    }
    return 1;
}
//�˺����������ܵĽ�����������������Ƚϣ����������
void place_one(int row,int arr[5][5])
{
    static int count=0;//ͳ�Ʒ�������
   for(int col=0;col<5;col++)
   {
       if(judge(row,col,arr))//�жϸ�λ���ܷ���1������Ӧ�е���ѡ���Ӧ�еĿγ�
       {
           arr[row][col]=1;//��������1
           if(row<4)
            place_one(row+1,arr);//�ݹ��𲽲�������
           else {
                if(f(table,arr)){//�÷������������
                    cout<<"��"<<++count<<"��:"<<endl;//��������count��1
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
       arr[row][col]=0;//��ĳ������������˵�����е����в�����1
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
