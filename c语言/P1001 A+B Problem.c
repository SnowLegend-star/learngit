#include<stdio.h> 

int main()
{
	int n,x,i,a=0;
	scanf("%d%d",&n,&x);
	for(i=1;i<=n;i++)
	{if(i%10==x) a++;
	
	for(;i/10!=0;i=i/10)
	   
	     if(i/10==x) a++;
	   
	}
	printf("%d",a);
	return 0;
}
