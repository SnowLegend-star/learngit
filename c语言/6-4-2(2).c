#include <stdio.h>
int main()
{   float e,t;
    int n;
    for(t=1,n=1;t>=10e-5;n++)
   {t=1.0/n*t;
    e=t+e;
   }
   printf("%.5f",e+1);
   return 0;
}
