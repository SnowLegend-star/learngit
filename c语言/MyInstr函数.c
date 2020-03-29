#include<stdio.h>
#include<string.h>
int MyInstr(char a[66])
{ 
	int k,i=1,j;
	char y='*';
	for(k=0;k<66;k++)
	{
	if(a[i]!=y) i++;
	
	if(a[i]==y) 
	{
	 j=i;break;
	}
	}
	return (j+1);
}
int main()
{
	int l;
	char a[66];
	printf("请输入待检测的字符串信息：\n");
	gets(a);
	l=MyInstr(a);
	if(l!=66&&l!=1)
	printf("该字符串的第%d位置有非法字符*",l);
	if(l==1)
	printf("该字符串不含有非法字符*");
	return 0;
}