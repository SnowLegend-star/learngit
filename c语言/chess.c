#include<stdio.h>
int main ()
{
	int a[19][19],i,j,n=1,k=1,max,c=1;
	for(i=0;i<19;i++)
	for(j=0;j<19;j++)
	scanf("%d",&a[i][j]);
	for(i=0;i<19;i++)
	for(j=0;j<19;j++)
	{
		if(a[i][j]==1&&a[i][j+1]==1&&a[i][j+2]==1&&a[i][j+3]==1&&a[i][j+4]==1) {printf("1:%d,%d",i+1,j+1);c=0;}
		
		if(a[i][j]==1&&a[i+1][j]==1&&a[i+2][j]==1&&a[i+3][j]==1&&a[i+4][j]==1) {printf("1:%d,%d",i+1,j+1);c=0;}
		
		if(a[i][j]==1&&a[i+1][j+1]==1&&a[i+2][j+2]==1&&a[i+3][j+3]==1&&a[i+4][j+4]==1) {printf("1:%d,%d",i+1,j+1);c=0;}
		
		if(a[i][j]==1&&a[i-1][j+1]==1&&a[i-2][j+2]==1&&a[i-3][j+3]==1&&a[i-4][j+4]==1) {printf("1:%d,%d",i+1,j+1);c=0;}
		
		if(a[i][j]==2&&a[i][j+1]==2&&a[i][j+2]==2&&a[i][j+3]==2&&a[i][j+4]==2) {printf("2:%d,%d",i+1,j+1);c=0;}
		
		if(a[i][j]==2&&a[i+1][j]==2&&a[i+2][j]==2&&a[i+3][j]==2&&a[i+4][j]==2) {printf("2:%d,%d",i+1,j+1);c=0;};
		
		if(a[i][j]==2&&a[i+1][j+1]==2&&a[i+2][j+2]==2&&a[i+3][j+3]==2&&a[i+4][j+4]==2) {printf("2:%d,%d",i+1,j+1);c=0;}
		
		if(a[i][j]==2&&a[i-1][j+1]==2&&a[i-2][j+2]==2&&a[i-3][j+3]==2&&a[i-4][j+4]==2) {printf("2:%d,%d",i+1,j+1);c=0;}
	}
		for(i=0;i<19;i++)
	    for(j=0;j<19;j++)
	    {
		if(c) 
		{  
		    if(a[i][j]==1)
		    {
			 if(a[i][j+1]==1)  n++;
			 if(a[i+1][j]==1)  n++;
			 if(a[i-1][j+1]==1) n++;
			 if(a[i+1][j+1]==1)   n++;
			}
			
	    	
		
	         
		    if(a[i][j]==2)
			{if(a[i][j+1]==2)  k++;
			 if(a[i+1][j]==2)  k++;
			 if(a[i-1][j+1]==2) k++;
			 if(a[i+1][j+1]==2)   k++;
			}
		    
		     max=n;
		     if(max<k) max=k;
	
			 
		}
		}
		printf("%d",max);
	
	return 0;
 } 
