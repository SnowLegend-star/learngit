#include<stdio.h>
main()
{
	int i,k;
	for(i=1;i<=5;i++)
	{
		k=i+1;
		if(k==5)continue;
	}
	printf("%d %d",i,k);
}
