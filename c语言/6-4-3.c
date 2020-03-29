#include<stdio.h>
#define x 10
int main() 
{
	int d[x],n,i=1;
	scanf("%d",&n);
	while(n!=0)
	{d[i]=n%2;
	n=n/2;
	i++;
	}
	if(i==1)printf("%d",n);
	else{
	if(d[i]==0)i-=1; 
	while(i>0)
	{
	printf("%d",d[i]);
	i--;
	}}
	return 0;
}


