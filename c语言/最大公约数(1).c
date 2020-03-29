#include<stdio.h>
int main()
{
	int x,y,mod,min,max;
	scanf("%d%d",&x,&y);
	max=x;
	min=y;
	if(y>x) {max=y;min=x;}
	while(max%min!=0)
    {
    	mod=max%min;
    	max=min;
    	min=mod;
	}
	printf("%d",min);
	return 0;
 } 
