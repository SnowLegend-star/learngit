#include<stdio.h>
#include<string.h>
int main()
{
	char a[81],x,i,j;
	printf("Please input a string(length<=80):\n");
    gets(a);
    printf("Please input a char to be deleted:\n");
	scanf("%c",&x);
	for(i=0;i<81;i++)
	if(a[i]==x) 
	{
		for(j=i+1;j<81;j++)
		a[j-1]=a[j];
		
		i--;
		}    
		puts(a);
	return 0;
}
