#include<iostream>
using namespace std;
int main()
{  int i,j,k,c[3][3],b[3][3],a[3][3];
    for(i=0;i<3;i++)
      for(j=0;j<3;j++)
      scanf("%d",&a[i][j]);
    printf("\n");
    for(i=0;i<3;i++)
      for(j=0;j<3;j++)
      scanf("%d",&b[i][j]);
    for(i=0;i<3;i++)    /*¾ØÕóÏà³Ë*/
       for(j=0;j<3;j++)
      {  c[i][j]=0;
          for(k=0;k<3;k++)
             c[i][j] = c[i][j] +  a[i][k]*b[k][j];
       }
     for(i=0;i<3;i++)    /*Êä³ö³Ë»ý¾ØÕó*/
      { for(j=0;j<3;j++)
          printf("%d ",c[i][j]);
          printf("\n");
      }
    return 0;
}
