#include <stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fp1,*fp2;
	
	char a[20],b[20],ch;
	
	printf("Please input a source text file's name:");
	scanf("%s",a);
	
	if((fp1=fopen(a,"rt"))==NULL)
	{
		printf("error\n"); exit(1);
	}
	
	printf("Please input a destination text file's name:");
	scanf("%s",b);

	if((fp2=fopen(b,"rt"))==NULL)
	{
		printf("error\n"); exit(1);
	}
	
	printf("Here is the destination text file's content:");

	while(!feof(fp2))
	{
		ch=fgetc(fp2);
		putchar(ch);
	}
	fclose(fp2);
	
	printf("Here is the source text file's content:");

	while(!feof(fp1))
	{
		ch=fgetc(fp1);
		putchar(ch);
	}
	rewind(fp1);
	
	fp2=fopen(b,"at+");

	ch=fgetc(fp1);
	while(ch!=EOF)
	{
		fputc(ch,fp2);
		ch=fgetc(fp1);
	}
	
	rewind(fp2);
	
	printf("Here is the new destination text file's content:");
	ch=fgetc(fp2);
	while(ch!=EOF)
	{
		putchar(ch);
		ch=fgetc(fp2);
	}
	fclose(fp2);
	
	return 0;
}

