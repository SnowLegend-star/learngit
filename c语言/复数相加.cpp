#include<iostream>
using namespace std;
void fushu(float a[4])
{
	int i;float c[2];
	c[0]=a[0]-a[2];
	c[1]=a[1]-a[3];
	for(i=0;i<2;i++)	
	 printf("%.2f ",c[i]);
}
int main()
{
	int i;float a[4];
	for(i=0;i<4;i++)
	  scanf("%f",&a[i]);
	fushu(a);
	return 0;
}
