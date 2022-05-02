#include<stdio.h>
#include<conio.h>
#include<alloc.h>

struct node
{
	int data;
	struct node *next,*previous;

}*start;

int n,m;
void create_list(int);
void insert_at_end(int);
void insert_at_begning(int);
void insert_at_pos(int,int);
void display();
void slect(int);
void count();
void delete1(int);

void main()
{
	int ch,i;
	clrscr();
	start=NULL;
	while(1)
	{
		printf("enter the choice\n");
		printf("Enter 1: for create list\n");
		printf("Enter 2: for insert at end\n");
		printf("Enter 3: for insert at begning\n");
		printf("Enter 4: for insert at position\n");
		printf("Enter 5: for display \n");
		printf("Enter 6: for slect\n");
		printf("Enter 7: for count\n");
		printf("Enter 8: for delete\n");
		printf("Enter 9: for exit \n");

		scanf("%d",&ch);

	   switch(ch)
	   {
		case 1:
		      if(start!=NULL)
		      {
			printf("LIST ALL READY CREATEED\n");
			break;

		      }
		      printf("Enter the no. of list\n");
		      scanf("%d",&n);
		      for(i=1;i<=n;i++)
		      {
				printf("Enter the data\n");
				scanf("%d",&m);
				create_list(m);
		      }
		      printf("listcreated \n");
		break;
		case 2:
		       if(start==NULL)
		       {
				printf("list is not create\n");
				break;
		       }
		       printf("Enter the data\n");
		       scanf("%d",&m);
		       insert_at_end(m);
		       printf("data inserted\n");
		break;
		case 3:
		       if(start==NULL)
		       {
				printf("list is not create\n");
				break;
		       }
		       printf("Enter the data\n");
		       scanf("%d",&m);
		       insert_at_begning(m);
		       printf("data inserted\n");
		break;
		case 4:
		       if(start==NULL)
		       {
				printf("list is not create\n");
				break;
		       }
		       printf("Enter the data\n");
		       scanf("%d",&m);
		       printf("Enter the position\n");
		       scanf("%d",&n);
		       insert_at_pos(m,n);
		       printf("data inserted at %d position\n",n);
		break;
		case 5:
			if(start==NULL)
			{
				printf("list not create\n");
				break;
			}
			display();
		break;
		case 6:
		      if(start==NULL)
		       {
				printf("list is not create\n");
				break;
		       }
		       printf("Enter the data\n");
		       scanf("%d",&m);
		       slect(m);
		break;
		case 7:
			if(start==NULL)
			{
				printf("list is not create\n");
				break;
			}
			count();
		break;
		case 8:
		      if(start==NULL)
		       {
				printf("list is not create\n");
				break;
		       }
		       printf("Enter the position\n");
		       scanf("%d",&m);
		       delete1(m);
		break;
		case 9:
			exit();
		default:
			printf("WRONG CHOICE|N");

	   }
	   getch();

	}
}
void create_list(int item)
{
	struct node *tmp,*q;
	tmp=(struct node*)malloc(sizeof(struct node));

	tmp->data=item;

	if(start==NULL)
	{
		start=tmp;
		start->previous=tmp;
		tmp->next=start->previous;
		return;
	}

	q=start;
	while(q->next!=start)
		q=q->next;

	q->next=tmp;
	tmp->previous=q;
	tmp->next=start;
       //	start->previous=tmp;
}
void insert_at_end(int item)
{
	struct node *tmp,*q;
	tmp=(struct node*)malloc(sizeof(struct node));
	tmp->data=item;
	tmp->next=start->previous;
	q=start;
	while(q->next!=start->previous)
	  q=q->next;
	  q->next=tmp;
	  tmp->previous=q;
}
void insert_at_begning(int item)
{
	struct node *tmp,*q;
	tmp=(struct node*)malloc(sizeof(struct node));

	tmp->data=item;
	q=start;

	tmp->previous=q->previous;
	tmp->next=q;
	q->previous->next=tmp;
	printf("q prev= %u\n tmp\n",q->next->next);
	q->previous=tmp;

	start=tmp;
	printf("q prev= %u\n tmp\n",start->next->next->next);



}
void insert_at_pos(int item,int pos)
{
	struct node *tmp,*q,*p;
	int i;
	tmp=(struct node*)malloc(sizeof(struct node));
	tmp->data=item;
	if(pos==1)
	{
		insert_at_begning(item);
		return;

	}
	q=start;
	for(i=1;i<pos;i++)
	{
		q=q->next;
	}
	if(q==NULL)


	{
		printf("wrong position \n");
		return;
	}
	tmp->previous=q->previous;
	tmp->next=q;
	q->previous->next=tmp;
	q->previous=tmp;
}
void display()
{
	struct node *q;
	q=start;
	printf("%d\n",q->data);
	q=start->next;
	while(q!=start)
	{
		printf("%d\n",q->data);
		q=q->next;
	}
}
void slect(int item)
{
	struct node *q;
	int i;
	q=start;
	if(item==q->data)
	{
		start=q->next;
		q->next->previous=q->previous;
		printf("DATA=%d",q->data);
		free(q);
		return;
	}
	while(item!=q->data)
	{
		q=q->next;
	}
	if(q==NULL)
	{
		printf("wrong data\n");
		return;
	}
	q->previous->next=q->next;
	q->next->previous=q->previous;
	printf("DATA=%d",q->data);
	free(q);
}
void count()
{
	struct node *q;
	int i;
	q=start;
	while(q!=NULL)
	{
		q=q->next;
		i++;
	}
	printf("NO. OF LINK LIST=%d",i);
}
void delete1(int pos)
{
	struct node *q;
	int i;
	q=start;

	if(pos==1)
	{
		start=q->next;
		q->next->previous=q->previous;
		q->previous->next=q->next;
		printf("DATA=%d",q->data);
		free(q);
		return;
	}
	for(i=1;i<pos;i++)
	{
		q=q->next;
	}
	if(q==NULL)
	{
		printf("wrong data\n");
		return;
	}
	q->previous->next=q->next;
	q->next->previous=q->previous;

	printf("DATA=%d",q->data);
	free(q);
}

