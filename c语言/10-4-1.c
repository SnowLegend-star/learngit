#include<stdio.h>
struct qimo{
	int num;
	char name[50];
	int math,eng,c;
};
main()
{
	struct qimo p[5];
	int i,max,min,j=0,k=0;
	for(i=0;i<5;i++)
	scanf("%d%s%d%d%d",&p[i].num,p[i].name,&p[i].math,&p[i].eng,&p[i].c);
	max=p[0].c+p[0].math+p[0].eng;
	min=p[0].c+p[0].math+p[0].eng;
	for(i=1;i<5;i++)
	{
		if(p[i].c+p[i].math+p[i].eng>max) {k=i;max=p[i].c+p[i].math+p[i].eng;};
		if(p[i].c+p[i].math+p[i].eng<min) {j=i;min=p[i].c+p[i].math+p[i].eng;};
	}
	printf("The max total score's student is %d  %s  %d\n",p[k].num,p[k].name,max);
	printf("The min total score's student is %d  %s  %d",p[j].num,p[j].name,min);
	return 0;
}
