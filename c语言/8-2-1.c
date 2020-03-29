#include <stdio.h>
#include<string.h>
#define ARR_SIZE 80
void Inverse(char str[80]);
int main()
{
 char str[ARR_SIZE];
   printf("Please enter a string: ");
   gets(str);           //ÊäÈë×Ö·û´®
   Inverse( str); //ÄæĞò×Ö·û´®
   printf("The inversed string is :");
   puts(str);
   return 0; //Êä³ö×Ö·û´®
}
void Inverse(char str[80])
{  int len,i=0,j; char temp;
   len=strlen(str);
   for(j=len-1;i<j;i++,j--)
   {  temp=str[j];   //½»»»Á½×Ö·û
      str[j]=str[i];
      str[i]=temp;
   }
}

