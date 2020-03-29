#include <stdio.h>
void input(int *number,int n);
void max_min_value(int *number,int n) ;  
void output(int *number,int n) ;
int main()
{
	int a[66]={0};
	printf("input 10 numbers:");
	input(a,10);
	max_min_value(a,10) ;
	printf("Now,they are:    ");
	output(a,10) ;
	return 0;
}
void input(int *number,int n)
{
	int i;
	for(i=0;i<n;i++) scanf("%d",&*(number+i));
}
void max_min_value(int *number,int n)
{
	int i,j,k,t,max,min;
	max=*number;
	min=*number;
	for(i=0;i<n;i++)
	{
		if(*(number+i)>=max) {max=*(number+i);j=i;}
		if(*(number+i)<=min) {min=*(number+i);k=i;}
	}
	t=*number;*number=min;*(number+k)=t;
	t=*(number+9);*(number+9)=max;*(number+j)=t;
}
void output(int *number,int n)
{
	int i;
	for(i=0;i<n;i++)
	printf("%d ",*(number+i));
}
