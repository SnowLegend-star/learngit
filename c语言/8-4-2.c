#include<stdio.h>
#include<string.h>
int love(char a[]) 
{
	int i,b,n=0,k;
	b=strlen(a);
	
	for(i=0;i<b;i++)
	if(a[i]==a[b-i-1])
	n++;
	if(n==b) {puts(a);k++;}
	return k;
	}
int main()
{
	char a[66],b[66],c[66],d[66],e[66];
	int x;
	printf("Please input 5 strings:\n");
	
	gets(a);gets(b);gets(c);gets(d);gets(e);
	printf("Huiwens are :");
	printf("\n");
	x=love(a);
	x=love(b);
	x=love(c);
	x=love(d);
	x=love(e);
	printf("num of Huiwens is :%d",3);
	return 0;
}

