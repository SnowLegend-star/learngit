#include<stdio.h>
int love(char word)
{   int i,ab=0;
	for(i=0;i<99;i++)
	{
		if(65<=word&&word<=90)  ab++;
		if(97<=word&&word<=122)  ab++£»
		 
	}
	return ab;
}
int main()
{
	char a[99];
	gets();
	printf("ÇëÊäÈë´ý¼ì²âµÄ×Ö·û´®ÐÅÏ¢£º");
	printf("\n");
	printf("´ý¼ì²âµÄ×Ö·û´®ÖÐº¬ÓÐ%d¸ö×ÖÄ¸×Ö·û",love(a))
	
}
