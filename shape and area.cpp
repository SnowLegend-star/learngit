#include  <iostream> 
using  namespace  std; 
const  int  pi=3.14159; 
 
class Shape{
	private:
	    int	m_ID;
	public:
		Shape(int i)
		{
			m_ID=i;
			cout<<"Shape constructor called:"<<m_ID<<endl;
		}
		~Shape()
		{
			cout<<"Shape destructor called:"<<m_ID<<endl;
		}
		int getID()
		{
			return m_ID;
		}
		void setID(int n)
		{
			m_ID=n;
		}
		int getArea()
		{
			return 0;
		}
}; 
class Circle:public Shape{
	private:
		int r;
	public:
		Circle(int i,int j):Shape(j)
		{
			r=i;
			cout<<"Circle constructor called:"<<getID()<<endl;
		}
		~Circle(){
			cout<<"Circle destructor called:"<<getID()<<endl;
		}
		int getArea(){
			int a;
			a=pi*getr()*getr();
			return a;
		}
		int getr(){
			return r;
		}		
};
class Rectangle:public Shape{
	private:
		int h,w;
	public:
		Rectangle(int i,int k,int j):Shape(j)
		{
			h=i;w=k;
			cout<<"Rectangle constructor called:"<<getID()<<endl;
		}
		~Rectangle(){
			cout<<"Rectangle destructor called:"<<getID()<<endl;
		}
		int getArea(){
			int a;
			a=geth()*getw();
			return a;
		}
		int geth(){
			return h;
		}
		int getw(){
			return w;
		}
};
int  main() 
{ 
        Shape  s(1);//1��ʾID 
        Circle  c(4,2);//4��ʾ�뾶��2��ʾID 
        Rectangle  r(4,  5,3);//4��5��ʾ���Ϳ�3��ʾID 
        cout<<"Shape�����"<<s.getArea()<<endl; 
        cout<<"Circle�����"<<c.getArea()<<endl; 
        cout<<"Rectangle�����"<<r.getArea()<<endl; 
}
