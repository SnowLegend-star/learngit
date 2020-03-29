#include<stdio.h>
#include<string.h>
int main()
{
	char str[100]={0},i,n,k=0,j;
	gets(str);
	n=strlen(str);
	for(i=0;i<n+k;i++)
	{
		if(str[i]>=65&&str[i+1]=='-'&&str[i+2]<=90)
		 {
		 	k=str[i+2]-str[i]-1;
		for(j=n+k-1;j>i;j--)
		str[j]=str[j-k];
		for(j=1;j<=k;j++)
		str[i+j]=str[i]+j;i=i+k;
		 }
		
		{
			if(str[i]>=97&&str[i+1]=='-'&&str[i+2]<=122)
			k=str[i+2]-str[i]-1;
		for(j=n+k-1;j>i;j--)
		str[j]=str[j-k];
		for(j=1;j<=k;j++)
		str[i+j]=str[i]+j;i=i+k;
		}
		
	}
	n=strlen(str);
	for(j=0;j<n;j++)
	printf("%c",str[j]);
	return 0;
 } 
