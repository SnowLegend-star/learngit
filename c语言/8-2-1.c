#include <stdio.h>
#include<string.h>
#define ARR_SIZE 80
void Inverse(char str[80]);
int main()
{
 char str[ARR_SIZE];
   printf("Please enter a string: ");
   gets(str);           //�����ַ���
   Inverse( str); //�����ַ���
   printf("The inversed string is :");
   puts(str);
   return 0; //����ַ���
}
void Inverse(char str[80])
{  int len,i=0,j; char temp;
   len=strlen(str);
   for(j=len-1;i<j;i++,j--)
   {  temp=str[j];   //�������ַ�
      str[j]=str[i];
      str[i]=temp;
   }
}

