#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<process.h>
struct node
{
	int data;
	struct node *next;
};
void create(struct node **q,int item)
{
	struct node *temp,*p;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->data=item;
	temp->next=NULL;
	if(*q==NULL)
	{
		*q=temp;
	}
	else
	{
		p=*q;
		if(p->next!=NULL)
		{
			p=p->next;
		}
		p->next=temp;
	}
}
void insert(struct node **q,int pos,int item)
{
	struct node *temp,*p;
	int i;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->data=item;
	if(pos==1)
	{
		temp->next=*q;
		*q=temp;
	}
	else
	{
		p=*q;
		for(i=1;i<pos-1;i++)
		{
			p=p->next;
		}
		temp->next=p->next;
		p->next=temp;
	}
}
int delete1(struct node **q,int item)
{
	struct node *temp;
	temp=*q;
	if(temp->data==item)
	{
	  *q=temp->next;
	  free(temp);
	  return temp->data;
	}
	else
	{
		while(temp->next!=NULL)
		{
			if(temp->data==item)
			{
				temp->next=temp->next->next;
				free(temp);
				return (temp->data);
			}
			temp=temp->next;
		}
		if(temp->data==item)
		{
			temp->next=NULL;
			free(temp->next);
			return (temp->data);
		}
		return 0;
	}
}
void display(struct node **q)
{
	struct  node *p;
	p=*q;
	if(p==NULL)
	{
		printf("Node is not created\n");
		return;
	}
	else
	{
		printf("\ndata=%d\n",p->data);
		while(p->next!=NULL)
		{
			printf("data=%d\n",p->next->data);
			p=p->next;
		}
	}
}
void main()
{
	int n,d,ch;
	struct node *q;
	while(1)
	{
	printf("\nEnter 1 for create node\n");
	printf("Enter 2 for insert at position\n");
	printf("Enter 3 for delete node\n");
	printf("Enter 4 for display node\n");
	printf("Enter 5 for exit\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("Enter the data\n");
			scanf("%d",&n);
			create(&q,n);
		break;
		case 2:
			printf("Enter the position\n");
			scanf("%d",&d);
			printf("Enter the data\n");
			scanf("%d",&n);
			insert(&q,d,n);
		break;
		case 3:

			printf("Enter the data\n");
			scanf("%d",&n);
			delete1(&q,n);
		break;
		case 4:
			display(&q);
		break;
		case 5:
			exit(0);
		default:
			printf("Wrong choice\n");
		break;
	}
	}
}