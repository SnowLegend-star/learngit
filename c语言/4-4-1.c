#include <stdio.h>
main()
{
   int a,b,c,d;
   scanf("%d",&a);
   b=a/3600;
   c=(a%3600)/60;
   d=a%60;
   printf("输出%d小时%d分钟%d秒",b,c,d);
}

