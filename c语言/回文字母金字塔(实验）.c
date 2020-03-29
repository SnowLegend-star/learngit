#include<stdio.h>
main(){
	int i,k,n=6;
	for(i=1;i<=n-1;i++)
	{
		for(k=1;k<=i;k++)
		printf(" ");
		
		for(k=1;i<=n-i-1;k++)
		printf("%c",'A'+-k);
		printf("\n");
	}
}
