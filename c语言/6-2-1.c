#include <stdio.h>
main()
{  int i,n; double s;
s=1;
   printf("Please enter n:");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
      s=s*i;   //����n�����󣬹۲�sֵ�ı仯����������
   printf("%d!=%.0f\n",n,s);}
