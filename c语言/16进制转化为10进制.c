#include<stdio.h>
#include<math.h>
int main()
{

	int c=1,b=0,a,m,n,i;
	scanf("%x",&a);
	for(i=1;c;i++)
	{
	m=pow(16,i);
	n=pow(16,i-1); 
	c=(a % m-a % n);
	b=b+c;
	}
	printf("%d",b);
	return 0;
}
