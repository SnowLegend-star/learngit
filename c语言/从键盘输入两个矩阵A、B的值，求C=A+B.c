#include<stdio.h>
#define n 5  
int main()
{      
       int a[n][n],i,j,sum1,sum2;
       sum1=0;sum2=0;
       for(i=0;i<n;i++)
       for(j=0;j<n;j++)
       scanf("%d",&a[i][j]);
    for(i = 0 ; i< n ; i++)
              sum1=sum1 +a[i][i] ;                                
    for(i = 0 ; i< n ; i++)
              sum2=sum2 + a[i][4-i];                              
       printf("主对角线元素之和%d\n",sum1);
       printf("副对角线元素之和%d\n",sum2);
       return 0;
}
