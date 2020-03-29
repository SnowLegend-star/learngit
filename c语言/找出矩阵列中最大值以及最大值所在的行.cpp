#include<stdio.h>
main()
{
	int a[3][4],i,j,max,k;
	printf("请按顺序输入3行4列矩阵中各行中数据：");
	printf("\n"); 
	for(i=0;i<3;i++)
	for(j=0;j<4;j++)
	scanf("%d",&a[i][j]);
	for(j=0;j<4;j++)
	{max=a[0][j];
	k=0;
	for(i=0;i<3;i++)
	{
		if(a[i][j]>max)
		{max=a[i][j];
		k=i;
		}
		
	}
	printf("第%d列第%d行元素%d为最大值",j+1,k+1,max);
	printf("\n");
	}
}
