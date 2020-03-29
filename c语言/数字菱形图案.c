#include<stdio.h>
int main()
{
	int n,i,k;
	for(i=1,n=9;i<=n;i++)
	{
	  for(k=1;k<=n-i;k++)
	  putchar(' ');
	  for(k=1;k<=2*i-1;k++)
	  printf("%d",i);
	  printf("\n");
	}
	for(n=8,i=1;i<=n;i++)
	{
		for(k=7;k>=n-i;k--)
		printf(" ");
		for(k=1;k<=2*(n-i+1)-1;k++)
		printf("%d",n-i+1);
		printf("\n");
	}
	return 0;
	
}
