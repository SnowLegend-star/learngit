#include <stdio.h>
#include<string.h>
void jiami(char *p)
{
	int i;
	for(i=0;i<68;i++)
	{
		{
		if(*(p+i)>=97&&*(p+i)<=122&&*(p+i)!='x'&&*(p+i)!='y'&&*(p+i)!='z') *(p+i)=*(p+i)+3;
		}
		{ if(*(p+i)=='y') *(p+i)='b';if(*(p+i)=='z') *(p+i)='c';if(*(p+i)=='x') *(p+i)='a';}
	}   
	puts(p);
}
void jiemi(char *p)
{
	int i;
	for(i=0;i<68;i++)
	{
	   if(*(p+i)>=100&&*(p+i)<=122) *(p+i)=*(p+i)-3;
	   else if(*(p+i)=='a') *(p+i)='x';else if(*(p+i)=='b') *(p+i)='y';else if(*(p+i)=='c') *(p+i)='z';
	}   
	puts(p);
}
void main()
{
	char a[66];
	gets(a);
	jiami(a);
	jiemi(a);
}
