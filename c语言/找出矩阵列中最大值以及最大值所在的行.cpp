#include<stdio.h>
main()
{
	int a[3][4],i,j,max,k;
	printf("�밴˳������3��4�о����и��������ݣ�");
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
	printf("��%d�е�%d��Ԫ��%dΪ���ֵ",j+1,k+1,max);
	printf("\n");
	}
}
