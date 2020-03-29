#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *p,*q;char c[66]={0},a[66]={0},b[132]={0};
	printf("Please input a source text file's name:\n");
	p=fopen("aa.txt","r");
	fgets(c,66,p);
	puts(c);
	fclose(p);
	q=fopen("bb.txt","r");
	printf("Here is the source text file's content:\n");
	fgets(a,66,q);
	puts(a);
	fclose(p);
	printf("Here is the new destination text file's content:\n");
	puts(c);puts(a);
}
