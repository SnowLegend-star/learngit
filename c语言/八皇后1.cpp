#include<iostream>
using namespace std;
#include<stdlib.h>
static int *x;  //��x��������Ž�����
static int sum; //��sum��������¼�м�����
int check(int k){  //�鿴k�ʺ��Ƿ�����Լ������ 
    for(int i=0;i<k;i++)
        if (x[i]==x[k] || abs(x[i]-x[k]) ==abs(i-k))  //���㲻��ͬһ��б�ߺ�ͬһ�� 
           return 1;

        return 0;

} 
void queen(int n){

     int k = 0;            //�� �ʺ�0 ��ʼ��
     sum = 0;

    while(k>=0){
        x[k]++;           //�ڷŵ�k���ʺ󣨵�һ�ΰڷŻʺ�0�� 
        while(x[k]<n && check(k) == 1)     //�Իʺ�k���м�⣬ֱ����������ͻ��x[k]Խ�� 

          x[k]++;    //�����һ�� 

        if(x[k]<n && k == n-1)
        {

          for(int i =0;i<n;i++)
           cout<<x[i]+1<<" ";
           cout<<endl;
           sum++; 

        }
        if(x[k]<n && k<n-1)     //���ʺ�û�аڷ��꣬�Ͱڷ���һ���ʺ�k = k+1 

           k++;

        else                    //������Ƿ�����Խ�磬Ҫ���л��� 
        { 

           x[k]=-1;         
           k--;  

        }

    }  
    if(sum == 0) 
        cout<<"�޽�"<<endl;
} 
int main(){

    int n =8; 
    x = new int[n+1];
    for(int i=0;i<n;i++){
        x[i] = -1;
    }

    queen(n);
    cout<<"һ����ĸ���Ϊ ��"<<sum<<endl;
    return 0;
}

