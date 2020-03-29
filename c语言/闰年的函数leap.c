#include<stdio.h>
#include<string.h>
int s(char x)
{ 
        if(65<=x&&x<=90)   return 1;
		if(97<=x&&x<=122)   return 1;
		else return 0;
}
int main()
{
	char a[99];
	int n=0,i;
	printf("请输入待检测的字符串信息：");
	printf("\n");
	gets(a);
	for(i=0;i<98;i++)
	if(s(a[i])) n++;
	printf("待检测的字符串中含有%d个字母字符",n-1);
	return 0;
}