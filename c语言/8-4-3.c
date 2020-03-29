#include <stdio.h>
int main()
{
	float x,z,h;
	int a[6],b[6],i,y,g;
	scanf("%f",&x);
	y=(int) x;g=y;
	for(i=0;y!=0;i++)
	{
	  a[i]=y%2;
	  y=y/2;
	}
	h=i;
	for(i=h-1;i>=0;i--)
	printf("%d",a[i]);
	printf(".");
	z=x-g;
	for(i=0;i<6;i++)
	 {  z=2*z;
	    if(z>1) 
	    	{
			   b[i]=1;z=z-1;
		    }
	 	else b[i]=0;
	 if(z==1) {b[i]=1;break;
	 }
	 }h=i;
	 for(i=0;i<h+1;i++)
	 printf("%d",b[i]);
	 return 0;
}
