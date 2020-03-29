#include <stdio.h>
#include <math.h>
int main()
{
  int a,b;
  double c;
  printf("请输入您的收入和是否离退休人员（1表示是，0表示否）：");
  scanf("%d,%d",&a,&b);
  switch(b)
  {	  case 1:printf("免纳税！\n");break;
		case 0:{
			if(a<=3500)
				printf("免纳税！\n");
			else if(a<=5000)
			{	
				c=(a-3500)*0.03;
				printf("纳税金额为%.2f",c);
			}
			else if(a<=8000)
			{
				c=(a-5000)*0.1+1500*0.03;
				printf("纳税金额为%.2f",c);
			}
			else
			{	c=(a-8000)*0.2+1500*0.03+3000*0.1;
			printf("纳税金额为%.2f",c);}
			}
	
  }
return 0;
}