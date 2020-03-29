#include <iostream>
using namespace std;
main()
{
	char a[11],b[11],max1,min1,max2,min2;
	int i,c[4],min;
	scanf("%s",a);
	scanf("%s",b);
	for(i=0;i<11;i++)
	  if(a[i]>=65&&a[i]<=90)  a[i]=a[i]+32;
	max1=a[0];min1=a[0];
	for(i=0;i<11;i++)
	  if(b[i]>=65&&b[i]<=90)  b[i]=b[i]+32;
	max2=b[0];min2=b[0];
	for(i=0;i<11;i++)
	{
	   if(a[i]>max1) max1=a[i];
	   if(a[i]<min1) min1=a[i];
	   if(b[i]>max2) max2=b[i];
	   if(b[i]<min2) min2=b[i];
	}
	c[0]=int abs(int (max2-max1));
	c[1]=int abs(int (max2-min1));
	c[2]=int abs(int (min2-max1));
	c[3]=int abs(int (min2-min1));
	min=c[0];
	for(i=0;i<4;i++)
	if(c[i]<min) min=c[i];
	printf("%d",min);
	return 0;
 } 
