#include <stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{  
   FILE *fp;
   int i,n,j=0,k=0;
   
  
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
