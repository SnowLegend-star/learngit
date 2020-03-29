#include<iostream>
using namespace std;
float bottle(float a)
{
	double n=0;
    while(a>=1)
    {
		n=n+a;
		a=a*((1/2.0)+(1/3.0));
	}
	return n;
}
int main()
{
	int a;
	float n;
	scanf("%d",&a);
	n=bottle(a);
	if(n<7.0)
	n=n-1;
	if(n>=7.0) n=n-2;

	printf("%.0f",n);
	return 0;
}
