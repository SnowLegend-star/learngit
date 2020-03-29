#include<stdio.h>
main()
{
	int a,b=0;
	scanf("%d",&a);
	while(a>=0)
	{if(a<60)
	b=b+1;
	scanf("%d",&a);}
	printf("%d",b);
}
