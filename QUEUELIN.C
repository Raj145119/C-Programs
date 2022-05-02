#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#define max 10
struct queue
{
	int data;
	struct queue  *next;
}*start;

int front=-1,rear=-1,n;
void insert(int);
void delete1();
void display();
void main()
{
	int ch;
	start=NULL;
	clrscr();
	while(1)
	{
		clrscr();
		printf("........QUEQE...USING....LINK LIST........\n");
		printf("Enter the choice\n");
		printf("Enter 1: for insert\n");
		printf("Enter 2: for delete\n");
		printf("Enter 3: for display\n");
		printf("Enter 4:exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				if((front==0 && rear==max-1)||rear+1==front)
				{
				printf("QUEUE IS OVER FLOW\n");
				return;
				}
				if(front==-1)
				{
					rear=0;
					front=0;
				}
				if(front>0&&rear==max-1)
				rear=0;

				printf("enter the data\n");
				rear++;
				scanf("%d",&n);
				insert(n);
			break;
			case 2:
				delete1();
			break;
			case 3:
				display();
			break;
			case 4:
				exit();
			default:
				printf("WRONG POSITION\n");
	     }
	     getch();
      }
}
void insert(int item)
{

	struct queue *tmp,*p;
	tmp=(struct queue*)malloc(sizeof(struct queue));
	tmp->data=item;
	if(start==NULL)
	{
		  tmp->next=NULL;
		  start=tmp;
		  return;
	}
	p=start;
	while(p->next!=NULL)
	p=p->next;
	p->next=tmp;

}
void delete1()
{
	struct queue *p;
	p=start;
	if(front==-1||front>rear)
	{
		printf("queue is empty\n");
		return;
	}
	p=start;

	printf("Data deleted\n");
	start=p->next;
	front++;
}
void display()
{
	struct queue *p;

	if(front==-1||front>rear)
	{
		printf("queue is empty\n");
		return;
	}
       //	if(front==max-1)
       //		front=0;

	p=start;
	while(p!=NULL)
	{
		printf("DATA=%d\n",p->data);
		p=p->next;
	}

}

