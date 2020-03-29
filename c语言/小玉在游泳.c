#include<stdio.h>
#include<math.h>
int main()
{
	int i;
	
	float a=0.0,x;
	scanf("%f",&x);
	if(x<100)
	{for(i=0;a<x;i++)
	a=a+2*pow(0.98,i);
	}
	
	printf("%d",i);
	return 0;
} 
