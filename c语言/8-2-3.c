#include <stdio.h>
int fun(int n)
{   int p=1;
   p=p*n;
   return p;
}
void main()
{   int n,i, f=1;
   printf("input member:");
   scanf("%d",&n);
   for(i=1;i<=n;i++) f=f*fun(i);
printf("%d!=%d\n",n,f);
}

