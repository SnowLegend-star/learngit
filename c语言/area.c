#include<stdio.h>
main()
{
	int a[9][9],i,n,j,b=0,r;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	scanf("%d",&a[i][j]);
	for(i=1;i<n-1;i++)
	for(j=1;j<n-1;j++)
	{
	if(a[i][j]<a[i-1][j]&&a[i][j]<a[i][j-1])
	   {  r=i;
	      for(r;r<n-1;r++)
	         {
			  while(a[r][j]!=1)
	          b++;
			 }
	   }
	}printf("%d",b);
 } 
