#include<stdio.h>
#define num(b)  sizeof(b)/sizeof(b[0])   //���ô��κ궨�������С
int main()
{
       char a[]={'A','B','C','D','E','F','G','H','I','J','K'};
       char x;
       int i, n;
       for(i=0;i<11;i++)        //�����ʾÿ��ѭ�����Ƶ�Ч��
        
		printf("%c", a[i]);
             printf("\n");        
       for(n = 2; n <= num(a) ; n++)    //���ú���������sizeof������ȡ����Ԫ�ظ���������ѭ�����ƵĴ���
{    x=a[10]; for(i=10;i>=1;i--)
        {
		a[i]=a[i-1];
		
		}a[0]=x;//���д����Σ����ѭ������һ��
            for(i=0;i<11;i++)        //�����ʾÿ��ѭ�����Ƶ�Ч��
                  printf("%c", a[i]);
             printf("\n");        //�����һ�У�����
       }
       return 0;
}
