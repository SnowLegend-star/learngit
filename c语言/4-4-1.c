#include <stdio.h>
main()
{
   int a,b,c,d;
   scanf("%d",&a);
   b=a/3600;
   c=(a%3600)/60;
   d=a%60;
   printf("���%dСʱ%d����%d��",b,c,d);
}

