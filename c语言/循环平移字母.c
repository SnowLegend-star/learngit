#include<stdio.h>
#define num(b)  sizeof(b)/sizeof(b[0])   //利用带参宏定义数组大小
int main()
{
       char a[]={'A','B','C','D','E','F','G','H','I','J','K'};
       char x;
       int i, n;
       for(i=0;i<11;i++)        //输出显示每次循环右移的效果
        
		printf("%c", a[i]);
             printf("\n");        
       for(n = 2; n <= num(a) ; n++)    //利用宏名，调用sizeof函数获取数组元素个数，控制循环右移的次数
{    x=a[10]; for(i=10;i>=1;i--)
        {
		a[i]=a[i-1];
		
		}a[0]=x;//请编写程序段，完成循环右移一次
            for(i=0;i<11;i++)        //输出显示每次循环右移的效果
                  printf("%c", a[i]);
             printf("\n");        //输出完一行，换行
       }
       return 0;
}
