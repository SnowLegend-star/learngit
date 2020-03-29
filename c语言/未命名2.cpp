#include  <iostream> 
#include  <iomanip> 
using  namespace  std; 
//请在此处补充Account类的定义 
class Account{
	public:
	     void printmoney()
		{   
		    cout<<name<<"的存款为"<<setiosflags(ios::fixed)<<setprecision(2)<<money<<endl;
		 }
		 void deposit(double m)
		 {
		 	long j;
            j=(int)(m*1000);
		 	if(j%10!=0)
		 	cout<<"您输入的金额不合法"<<endl;
		 	else money=money+m;
		 }
		 void withdraw(double n)
		 {  int j;
            j=(int)(n*1000);
		 	if(j%10!=0)
		 	cout<<"您输入的金额不合法"<<endl;
		 	else if(money-n<0) cout<<"您的存款金额不足"<<endl;
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
		 	cout<<"您输入的金额不合法"<<endl;
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
        tom.init("32020320011001876X",  "Tom  Black",  "男",  19,  2000.89); 
        tom.printmoney();//输出：Tom  Black的存款为2000.89 
        tom.deposit(89.471);//输出：您输入的金额不合法 
        tom.printmoney();//输出：Tom  Black的存款为2000.89 
        tom.deposit(10000); 
        tom.printmoney();//输出：Tom  Black的存款为12000.89 
        tom.withdraw(10001); 
        tom.printmoney();//输出：Tom  Black的存款为1999.89 
        tom.withdraw(10000.123);//输出：您输入的金额不合法 
        tom.printmoney();//输出：Tom  Black的存款为1999.89 
        tom.withdraw(10000.9);//输出：您的存款金额不足 
        tom.printmoney();//输出：Tom  Black的存款为1999.89 
        Account  jerry; 
        jerry.init("320203200910116569",  "Jerry  Black",  "女",  11,  100.956);//输出：您输入的金额不合法 
        jerry.printmoney();//输出：Jerry  Black的存款为0.00 
}


