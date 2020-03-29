#include<stdio.h> 
main()
{
	int n,b=0,c;
	scanf("%d",&n);
	for(;n!=0;)
	{c=n%10;
	n=n/10;
	b=b+c;
	
	}
	printf("%d",b);
}
