#include  <iostream> 
#include<iomanip> 
#include  <cmath> 
using  namespace  std; 

const  double  PI=3.1415926; 
//请在此处完善类的设计 
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
        cout<<"油桶的容积是"<<can.getvolumn()<<"  "<<endl; 
        cout<<"铁皮的面积是"<<can.getarea()<<endl; 
}
