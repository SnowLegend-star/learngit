#include<stdio.h>
void zhishu(int n)
{
	int a[66],i,k=2,h,p;
	 static j=0;
	for(i=0;i<999;i++)
	{ 
	if(n%k==0) 
    {   
	    if(k==2||k==3)
	    {
	      n=n/k;
	      a[j]=k;j++;
		} 
		else
		{
			for(h=2;h<=k;h++)
		        {
				if(k%h==0&&h!=k) break;
		        if(h==k)
				{
				n=n/k; 
	            a[j]=k;j++;
				}
				}  
		}	
	}
	else k++;
	} 
	for(i=0;i<66;i++)
	if(a[i]=a[i+1])
	for(p=j-1;p>i+1;p--)
	{a[p-1]=a[p];
	a[p]='\0';
	}
	for(i=0;i<j;i++)
	printf("%d ",a[i]);
 } 
 int main()
 {
 	int n,b[66],i,c[10];
 	scanf("%d",&n);
 	for(i=0;i<n;i++)
 	scanf("%d",&c[i]);
 	for(i=0;i<n;i++)
 	zhishu(c[i]);
 	return 0;
 }
