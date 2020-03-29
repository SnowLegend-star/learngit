#include<stdio.h>
#include<math.h> 
int main()
{
   int X,W,Y;
   printf("input year:\n");
   scanf("%d",&Y);
   X=Y-1+floor((Y-1)/4)-floor((Y-1)/100)+floor((Y-1)/400)+1;
   W=X-floor(X/7)*7;
   printf("%d年的元旦是星期%d",Y,W);
}
