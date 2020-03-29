#include<stdio.h>
int main()
{
	int n,a[101],i,sum=0,j,b[101]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=1;i<n;i++)
	{for(j=0;j<i;j++)
	    if(a[i]>a[j]) b[i]=++sum;
		sum=0;
	}
	b[0]=0;
	for(i=0;i<n;i++)
	printf("%d ",b[i]);
	return 0;
}

