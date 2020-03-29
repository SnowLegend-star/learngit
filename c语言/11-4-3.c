#include<stdio.h>

struct student
{
	int xh;
	char xm[6];
	int cj[3];
} a[sizeof(struct student)];
void main()
{
	int i;
	for(i=0;i<3;i++)
	scanf("%d%s%d%d%d",&a[i].xh,a[i].xm,&a[i].cj[0],&a[i].cj[1],&a[i].cj[2]);
}
