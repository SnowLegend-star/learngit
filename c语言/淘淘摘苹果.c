#include<stdio.h>
main()
{
	int i,n,a,c=0,x;
	scanf("%d%d",&n,&x);
	for(i=1;i<=n;i++)
	{
	  for(a=i;a>0;a/10)
	  { 
	    if((a%10)==x)
		c++;
	  }
	
	}
	
	printf("%d",c);
}
