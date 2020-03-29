#include <stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{  
   FILE *fp;char b;
   int a[8]={0},i,n,j=0,k=0;
   
  
   if((fp=fopen("file11_1.txt","w"))==NULL)
{
   printf("%s不能打开\n","file11_1.txt.txt");
   exit(1);
}
  for(i=0;i<7;i++)
  
  	fprintf(fp,"%5d",a[i]);
  fclose(fp);
  if((fp=fopen("file11_1.txt","r"))==NULL)
  {
  	printf("%s不能打开\n","file11_1.txt.txt");
  	exit(1);
  }
  
  while(!feof(fp))
  {
  	fscanf(fp,"%d",&n);
  	if(n>0) j=j+n;
  	if(n<0) k=k+n;
  }
  printf("sum>0 number is %d,sum<0 number is %d",j,k);
  fclose(fp);
}
