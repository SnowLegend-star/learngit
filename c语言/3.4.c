#include<stdio.h>
int main()
{
	char a,b;
	printf("input a character(A~Z):\n");
	scanf("%c",&a);
	b=(a-65+24)%26+65;
	printf("%c_>%c",a,b);
	return 0;
}
