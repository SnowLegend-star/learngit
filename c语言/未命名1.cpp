#include  <iostream> 
#include<iomanip> 
#include  <cmath> 
using  namespace  std; 

const  double  PI=3.1415926; 
//���ڴ˴����������� 
class cylinder{
	public:
		    double getvolumn( )
		     {
		     	double v;
		     	v=PI*r*r*h;
		     	return v;
			 };
		    double getarea()
		     {
		     	double m;
		     	m=2*PI*r*h;
		     	return m; 
			 };
		    void init(double a,double b);
    private: double r;
             double h;
};
void cylinder::init(double a,double b)
		     {
		     	r=b;h=a;
			 }
int  main() 
{ 
        double  d,h; 
        cin>>d>>h; 
        cylinder can;
         can.init(h,d/2);
        cout<<fixed<<setprecision(6); 
        cout<<"��Ͱ���ݻ���"<<can.getvolumn()<<"  "<<endl; 
        cout<<"��Ƥ�������"<<can.getarea()<<endl; 
}
