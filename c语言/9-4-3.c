#include<stdio.h>
#include<string.h>
void link(char *p,char *s)
{
	strcat(p,s);
	puts(p);
}
void main()
{
	char c[66],a[66];
	gets(c);
	gets(a);
	link(c,a);
}
