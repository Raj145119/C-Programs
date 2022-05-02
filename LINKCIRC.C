#include<stdio.h>
#include<conio.h>
#include<alloc.h>
void create_list(int);
void insert_at_end(int);
void insert_at_begning(int);
void insert_at_position(int,int);
void slection(int);
void display();
void count();
void delete1(int);
struct node
{
	int data;
	struct node *next;
}*start;
int m,n;
void main()
{
	int ch,i,d;
	clrscr();
	start=NULL;
	while(1)
	{
		 clrscr();
		 printf("Enter your choice option\n");
		 printf("Enter 1: for create list\n");
		 printf("Enter 2: for insert at end\n");
		 printf("Enter 3: for insert at begning\n");
		 printf("Enter 4: for insert at position\n");
		 printf("Enter 5: for display\n");
		 printf("Enter 6: for slection\n");
		 printf("Enter 7: for count list\n");
		 printf("Enter 8: for exit\n");
		 printf("Enter 9: for delete1\n");
		 scanf("%d",&ch);
		 switch(ch)
		{
			case 1:
			if(start!=NULL)
			      printf("list al ready createed\n");

			      printf("Enter the no.of link list\n");

			scanf("%d",&n);
			for(i=0;i<n;i++)
			{
			      printf("Enter the data \n");
			      scanf("%d",&d);
			      create_list(d);
			}
			break;
			case 2:
			if(start==NULL)
			{
			printf("node not create \n");
			break;
			}
			printf("Enter the data\n");
			scanf("%d",&n);
			insert_at_end(n);
			break;
			case 3:
			if(start==NULL)
			{
			printf("node not create \n");
			break;
			}
			printf("Enter the data\n");
			scanf(" %d",&n);
			insert_at_begning(n);
			break;

			case 4:
			if(start==NULL)
			{
			printf("node not create \n");
			break;
			}
			printf("Enter the data\n");
			scanf("%d",&n);
			printf("Enter the  position\n");
			scanf("%d",&m);
			insert_at_position(n,m);
			printf("Data insert at %d position\n",m);
			break;
			case 5:
			if(start==NULL)

			{
				printf("NO LIST CREATE\n");
			break;
			}
			display();
			break;
			case 6:
			if(start==NULL)
			{
				printf("List not created...create list first\n");
				break;
			}
			printf("Enter the data to slect\n");
			scanf("%d",&m);
			slection(m);
			break;
			case 7:
			if(start==NULL)
			{
				printf(" link list not create\n");
				break;
			}
			count();
			break;
			case 8:
				exit();
			case 9:
			if(start==NULL)
			{

				printf("NO LIST CREATE\n");
				break;

			}
			printf("Enter the position\n");
			scanf("%d",&m);
			delete1(m);
			break;

			default:
				printf("wrong choice\n");

		}
		getch();
	}

}

void create_list(int item)
{
	 struct node  *p,*q;
	 /*"memory create"*/
	 q=(struct node*)malloc(sizeof(struct node));
	 q->data=item;

	 if(start==NULL)
	 {

	 start=q;
	  q->next=start;
	 return;
	 }
	 p=start;
	 while(p->next!=start)
		p=p->next;

		p->next=q;
		q->next=start;

}
void insert_at_end(int item)
{
	struct node *p,*q;
	q=(struct node*)malloc(sizeof(struct node));

	q->data=item;

	p=start;

	while(p->next!=start)
	p=p->next;
	p->next=q;
	q->next=start;

}
void insert_at_begning(int item)
{
	struct node *q;
	q=(struct node*)malloc(sizeof(struct node));
	q->data=item;
	q->next=start;
	start=q;

}
void insert_at_position(int item, int pos)
{
	struct node *temp1,*q;
	int i;
	temp1=(struct node*)malloc(sizeof(struct node));
	temp1->data=item;

	q=start;
	if(pos==1)
	{
		insert_at_begning(m);
		return;
	}
	for(i=1;i<pos-1;i++)
	{
		q=q->next;
	}
	if(q==NULL)
	{
		printf("Wrong position\n");
		return;

	}
	temp1->next=q->next;
	q->next=temp1;
}
void slection(int item)
{
	struct node *q;
	q=start;
	if(q->data==item)
	{
		start=q->next;
		printf("data=%d\n",q->data);
	       //	q->next=NULL;
		free(q);
	}

	while(q->next->data!=item)
	{
		q=q->next;
	}
	q->next=q->next->next;
	printf("data=%d\n",q->next->data);
	printf("data not found in link list\n");
}
void count()
{
	struct node *p;
	int i=0;
	p=start;
	while(p!=start)
	{
	i++;
	p=p->next;
	}
	printf("no of link list =%d",i);

}
void display()
{

	struct node *p;
	textcolor(RED);
	p=start;
	while(p->next!=start)
	{
	       cprintf("data=%d\n",p->data);
		p=p->next;
	}
       //	cprintf("DATA=%d\n",p->data);
}
void delete1(int pos)
{
	struct node *p,*q;
	int i;
	q=start;
	if(pos==1)
	{
		start=q->next;
		printf("data=%d",q->data);
		free(q);
		return;
	}
	for(i=1;i<pos-1;i++)
	{
		q=q->next;
	}
	printf("Data=%d",q->data);
	q->next=q->next->next;

}