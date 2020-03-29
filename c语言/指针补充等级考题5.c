#include <stdio.h>
#include<string.h>
void shuzi(char *s)
{
	int i,j=0;
	char b[66]={0};
	for(i=0;i<5;i++)
	if(*(s+i)>=48&&*(s+i)<=57) b[j++]=*(s+i);
	puts(b);
}
void main()
{
	char a[66];
	gets(a);
	shuzi(a);
}
