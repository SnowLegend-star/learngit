#include<stdio.h>
void love(int x[])
{
	int max,min,j,k,p,temp;
	max=x[0];
	min=x[0];
	for(j=0;j<10;j++)
	{
		
		if(x[j]>max) {max=x[j];k=j;
		}
		if(x[j]<min) {min=x[j];p=j;}
	}
	temp=x[k];
	x[k]=x[p];
	x[p]=temp;
	for(j=0;j<10;j++)
	printf("%d ",x[j]);
}
int main()
{
	int a[10],i;
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	printf("Before change the max and min's position:");
	printf("\n");
	for(i=0;i<10;i++)
	printf("%d ",a[i]);
	printf("\n");
	printf("After change the max and min's position:");
	printf("\n");
	love(a);
	return 0;
}
