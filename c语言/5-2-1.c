#include <stdio.h>
int main()
{  int a,b,c,max;
printf("请输入3个整数："); scanf("%d%d%d",&a,&b,&c);
max=a;
if (c>a)
{ if(c>b) max=c;
  else  max=b;}
else{if (a>b) max=a;
else max=b;
}
  
printf("3个数中最大者为：%d\n",max);
}
 return 0;
