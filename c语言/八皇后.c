#include<iostream>
using namespace std;
int main()
{
	int a[8][8],i,j,k,sum=0,h,l;
	char b[9];
	gets(b);
	for(i=0;i<=7;i++)
	if(b[i]!='*') b[i]=b[i]-48;
	for(i=0;i<=7;i++)
	  for(j=0;j<=7;j++)
	  {
	  	a[i][j]=0;
	  	if(b[i]!='*'&&j==b[i]) a[i][j]=1;
	  	if(b[i]=='*') k=i;
	  }
	for(j=0;j<=7;j++)
	{
		for(i=0;i<=7;i++)
	      sum=sum+a[i][j];
	        if(sum==0)
			  for(h=k,l=j;h--,l--;h>=0,l>=0)
			  sum=sum+a[h][l];
			    if(sum==0)
			      for(h=k,l=j;k++,j++;h<=7,l<=7)
			      sum=sum+a[h][l];
			        if(sum==0)
			          for(h=k,l=j;h--,l++;h>=0,l<=7)
			          sum=sum+a[h][l];
			            if(sum==0)
			              for(h=k,l=j;h++,l--;h<=7,l>=0)
			              sum=sum+a[h][l];
						    if(sum==0)    {	printf("%d",j+1);break;}					
							if(sum!=0&&j==7)  printf("NO ANSWER");
	}
	 return 0; 		    
}
