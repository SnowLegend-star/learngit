#include<stdio.h>
#define N 10
main()
{
	int a[N],b[N+1],i,j,x,y,z,k;
	for(i=0;i<N;i++)
	{scanf("%d",&a[i]);
	b[i]=a[i];
	}
	for(j=1;j<N;j++)
	for(i=0;i<N-j;i++)
	if(a[i]<a[i+1])
	{
	   x=a[i];
	   a[i]=a[i+1];
	   a[i+1]=x;	
	}
	printf("After sort,array a is :");
	for(i=0;i<N;i++)
	printf("%d ",a[i]);
	for(i=0;i<N;i++)
	b[i]=a[i];
	printf("\n");
	printf("Please input a number to insert into array a:");
	printf("\n");
	scanf("%d",&y);
	for(i=0;i<N;i++)
    {if(y>=a[i])
    {z=i;break;
	}
	if(a[i]>y) z=10;
	}
	for(k=N;k>z;k--)
	b[k]=b[k-1];
	b[z]=y;
	printf("After insert a new number,the sorted array a is :");
	for(i=0;i<N+1;i++)
	printf("%d ",b[i]);
}
