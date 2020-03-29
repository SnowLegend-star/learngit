#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;float d,x1,x2,x3,x4;
	scanf("%d,%d,%d",&a,&b,&c);
	d=b*b-4*a*c;
	x1=(-b+sqrt(d))/(2.0*a);
	x2=(-b-sqrt(d))/(2.0*a);
	x3=-b/(2.0*a);
	x4=sqrt(-d)/(a*2.0);
	if(a==0)
	printf("The equation is not a quadratic");
	else if(d>0)
	printf("The equation has distinct real roots:%.4f and %.4f",x1,x2);
	else if (d=0)
	printf("The equation has two equal roots:%.4f",x1);
	else 
	printf("The equation  has complex roots:\n");    
	printf("%.4f+ %.4fi\n",x3,x4);
	printf("%.4f- %.4fi",x3,x4);
	return 0;
}
