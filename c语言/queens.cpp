#include<iostream>
using namespace std;
int main()
{
	int i,j,q[8][8],k,h,l,sum=0,flag=0;
	char s[9]; 
	gets(s);
	for(i=0;i<=7;i++)
	{
		if(s[i]!='*') s[i]=s[i]-49;
		sum=sum+s[i];
	}
	sum=70-sum;
	for(i=0;i<=7;i++)
	  for(j=0;j<=7;j++)
	  {
	  	q[i][j]=0;
	  	if(s[i]!='*'&&j==s[i]) q[i][j]=1;
	  	if(s[i]=='*') k=i;
	  }
        j=sum;
	  for(h=j,l=k;h>=0&&l>=0;h--,l--)// 左上
	  if(q[l][h]==1)  flag=1;
	  for(h=j,l=k;h<=7&&l>=0;h++,l--)//右上 
	  if(q[l][h]==1)  flag=1;
	  for(h=j,l=k;h>=0&&l<=7;h--,l++)//左下 
	  if(q[l][h]==1)  flag=1;
	  for(h=j,l=k;h<=7&&l<=7;h++,l++)// 右下
	  if(q[l][h]==1)  flag=1;
	if(flag) printf("No Answer");
	else printf("%d",j+1);
	return 0;
 } 
