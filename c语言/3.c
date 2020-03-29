#include <stdio.h>
#include<stdlib.h>

int main()
{
	struct student
	{
		int XH;
		char XM[10];
		int CJ[3];
		float PJF;
	}stu[5];
	
	FILE *fp;
	int i,j;
	char ch;
	
	fp=fopen("file11_3.txt","wt+");
	
	for(i=0;i<5;i++)
	{
		printf("Please input XH of No %d",i+1); scanf("%d",&stu[i].XH);
		fprintf(fp,"%d",stu[i].XH); fputc(' ',fp);fputc(' ',fp);
		
		printf("\nPlease input XM of No %d",i+1); scanf("%s",stu[i].XM);
		fprintf(fp,"%s",stu[i].XM); fputc(' ',fp);fputc(' ',fp);
		
		printf("\nPlease input CJ of No %d",i+1);
		scanf("%d %d %d",&stu[i].CJ[0],&stu[i].CJ[1],&stu[i].CJ[2]);
		printf("\n");
		for(j=0;j<3;j++)
		{
			fprintf(fp,"%d",stu[i].CJ[j]);
			fputc(' ',fp);fputc(' ',fp);
		}
		
		stu[i].PJF=(stu[i].CJ[0]+stu[i].CJ[1]+stu[i].CJ[2])/3.0;
		fprintf(fp,"%.1f",stu[i].PJF);
		fputc('\n',fp);
	}
	
	rewind(fp);
	ch=fgetc(fp);
	while(ch!=EOF)
	{
		putchar(ch);
		ch=fgetc(fp);
	}
	
	fclose(fp);
	
	return 0;
}

