struct nan
{
	int data;
	struct nan *next;
};
#include <stdio.h>
#include <malloc.h>
int main()
{
	int i,b[]={1,4,6,8,30,45},a[]={5,10,15};
	struct nan *p,*head1,*head2,*q,*k,*t;
	for(i=0;i<3;i++)
	{
		p=(struct nan*)malloc(sizeof(struct nan));
		if(i==0)
		{head1=p; q=p;}
		p->next=NULL;
		p->data=a[i];
		q->next=p;
		q=p;
	}
	for(i=0;i<6;i++)
	{	
		p=(struct nan*)malloc(sizeof(struct nan));
		if(i==0)
		{head2=p; q=p;}
		p->next=NULL;
		p->data=b[i];
		q->next=p;
		q=p;
	}
	for(p=head1,q=head2,k=head1,t=head2;;)
	{
		p=k;
		q=t;
		k=k->next;
		t=t->next;
		if(k==NULL) break;
		q->next=p->next;
		p->next=q;
	}
	p->next=q;
	printf("%d",head1->data);
	for(p=head1->next;p!=NULL;p=p->next)
		printf("%5d",p->data);
	return 0;
}
