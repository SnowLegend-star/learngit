#include  <iostream> 
#include  <iomanip> 
using  namespace  std; 
//���ڴ˴�����Account��Ķ��� 
class Account{
	public:
	     void printmoney()
		{   
		    cout<<name<<"�Ĵ��Ϊ"<<setiosflags(ios::fixed)<<setprecision(2)<<money<<endl;
		 }
		 void deposit(double m)
		 {
		 	long j;
            j=(int)(m*1000);
		 	if(j%10!=0)
		 	cout<<"������Ľ��Ϸ�"<<endl;
		 	else money=money+m;
		 }
		 void withdraw(double n)
		 {  int j;
            j=(int)(n*1000);
		 	if(j%10!=0)
		 	cout<<"������Ľ��Ϸ�"<<endl;
		 	else if(money-n<0) cout<<"���Ĵ�����"<<endl;
		 	else money=money-n;
		 }
		 void init(char a[19],char b[20],char *c,int d,double e)
		 {  
		 	int i,j;
            j=(int)(e*1000);
		 	
		 	for(i=0;a[i]!='\0';i++)
		 	number[i]=a[i];
			for(i=0;a[i]!='\0';i++)
		 	name[i]=b[i];
		 	gender=c;  age=d;  
			 if(j%10!=0)
		 	cout<<"������Ľ��Ϸ�"<<endl;
			 else money=e;
		 }
	private:
		char number[19];
		char name[20];
		char *gender;
		double money=0;
		int age;
};

int  main() 
{ 
        Account  tom; 
        tom.init("32020320011001876X",  "Tom  Black",  "��",  19,  2000.89); 
        tom.printmoney();//�����Tom  Black�Ĵ��Ϊ2000.89 
        tom.deposit(89.471);//�����������Ľ��Ϸ� 
        tom.printmoney();//�����Tom  Black�Ĵ��Ϊ2000.89 
        tom.deposit(10000); 
        tom.printmoney();//�����Tom  Black�Ĵ��Ϊ12000.89 
        tom.withdraw(10001); 
        tom.printmoney();//�����Tom  Black�Ĵ��Ϊ1999.89 
        tom.withdraw(10000.123);//�����������Ľ��Ϸ� 
        tom.printmoney();//�����Tom  Black�Ĵ��Ϊ1999.89 
        tom.withdraw(10000.9);//��������Ĵ����� 
        tom.printmoney();//�����Tom  Black�Ĵ��Ϊ1999.89 
        Account  jerry; 
        jerry.init("320203200910116569",  "Jerry  Black",  "Ů",  11,  100.956);//�����������Ľ��Ϸ� 
        jerry.printmoney();//�����Jerry  Black�Ĵ��Ϊ0.00 
}


