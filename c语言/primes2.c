#include<stdio.h>
int x=0;
void sum(int n,int b[])
{
	int i,j,flag=1,m,flag2=1;
	for(i=2;i<=n;i++)
	{
		flag=1;
		for(j=2;j<i/2;j++)
		{
			if(i%j==0)
			{
				flag=0;
				break;
			}
		}
		if(flag && n%i==0)
		{
			flag2=1;
			for(m=0;m<x;m++)
			{
				if(i==b[m])
					flag2=0;
			}
			if(flag2)
			{
				b[x]=i;
				x++;
			}
			n=n/i;
			break;
		}
	}
	if(n!=1)
		sum(n,b);
	return;
}
int main()
{
	int i,j,n,a[20],b[100],min,temp,mini;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		sum(a[i],b);
	
	for(i=0;i<x;i++)
	{
		min=b[i];
		mini=i;
		for(j=i;j<x;j++)
			if(b[j]<min)
			{
				min=b[j];
				temp=b[mini];
				b[mini]=b[j];
				b[j]=temp;
			}
	}
	for(i=0;i<x;i++)
		printf("%d ",b[i]);
	return 0;			
}
