#include<stdio.h>
int main()
{
	int a,b,c,n=0;
	for(a=123;a<333;a++)
	{   
		 
		   for(b=246;b<666;b++)
		   if(b/a==2&&b%a==0)
		    
		  	    for(c=369;c<999;c++)
		  	    if(c/a==3&&c%a==0)
		  	    	if(a%10+a/10%10+a/100+b%10+b/10%10+b/100+c%10+c/10%10+c/100==45)
		  	    		if(a%10*(a/10%10)*(a/100)*(b%10)*(b/10%10)*(b/100)*(c%10)*(c/10%10)*(c/100)==362880)
		  	    		{
				  			printf("%d %d %d ",a,b,c);
				  			n++;
				  			if(n%1==0) printf("\n");
				  		} 
		    
		 
	}
	return 0;
}
