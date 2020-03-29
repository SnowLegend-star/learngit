#include<stdio.h>
void move(int*p,int b)
{
	int n,i,c[66],j=0,k;
	printf("how many place you want move?");
	scanf("%d",&n);
	for(i=b-n;i<b;i++)
	c[j++]=*(p+i);
	for(i=b-1;i>=0;i--)
	*(p+i)=*(p+i-n);
	for(k=0;k<j;k++)
	*(p+k)=c[k];
	printf("Now,they are:\n");
	for(i=0;i<b;i++)
	printf("%d ",*(p+i));
}
void main()
{
	int a[100],n,i;
	printf("how many numbers?");
	scanf("%d",&n);
	printf("input %d numbers:\n",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	move(a,n);
}
