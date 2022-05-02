#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct node
{
	int data;
	struct node *next;

};
void linklist()
{
	struct node  *n1,*n2,*n3,*p;
	int d;
	printf("Enter the value in an node\n");
	scanf("%d",&d);
	n1=(struct node*)malloc (sizeof(struct node));
	n1->data=d;
	n1->next=NULL;
	printf("Enter the value in an 2nd  node\n");
	scanf("%d",&d);
	n2=(struct node*)malloc (sizeof(struct node));
	n2->data=d;
	n2->next=NULL;
	n1->next=n2;
	printf("Enter the value in an 3rd node\n");
	scanf("%d",&d);
	n3=(struct node*)malloc (sizeof(struct node));
	n3->data=d;
	n3->next=NULL;
	n2->next=n3;
	p=n1;
	while(p!=NULL)
	{
		printf("\ndata=%d",p->data);
		p=p->next;
	}
}
void main()
{
	clrscr();
	linklist();
	getch();
}