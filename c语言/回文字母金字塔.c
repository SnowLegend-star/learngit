#include<stdio.h>
main()
{
	int i,k,n,b;
	char a;
	scanf("%c",&a);
	n=a-64;
	for(i=1;i<=n;i++)
	{
		for(k=1;k<=n-i;k++)
		printf(" ");
		for(k=1;k<=i;k++)
		printf("%c",'A'+k-1);
		for(k=1;k<=i-1;k++)
		printf("%c",'A'+i-1-k);
		printf("\n");
	}
	for(i=1;i<=n-1;i++)
	{
		for(k=1;k<=i;k++)
		printf(" ");
		for(k=1;k<=n-i;k++)
		printf("%c",'A'+k-1);
		for(k=1;k<=n-i-1;k++)
		printf("%c",'A'+n-1-i-k);
		printf("\n");
	}
	
}
