#include<stdio.h>

int main()
{
    int b[80],i,a,n,k;
    scanf("%d%d",&a,&n);
    for(i=0;i<n;i++)
    b[i]=a;
    for(i=1;i<n;i++)
    {
	  b[i]=b[i]-a*i;
    
	  
	    for(k=1;b[i]<0;k++)
	    {
		  b[i]=b[i]+10;b[i-j]=b[i-j]-k;
		   for(j=1;a[i-j]<0;j++)
		   a[i-j]=a[i-j]+10;
		   a[i-j-1]= a[i-j-1]-1;
		}
	  
	}
	for(i=0;i<n;i++)
	printf("%d",b[i]);
	return 0;
 } 
