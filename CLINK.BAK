#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<process.h>
struct node
{
	int data;
	struct node *next;
}*start;

class LinkedList
{
public:
void createlist(int );
void display();
};
void LinkedList::createlist(int item)
{
	struct node *p,*s;
	p=(struct node*)malloc(sizeof(struct node));
	p->data=item;
	p->next=NULL;

	if(start==NULL)
	{
	     start=p;
	     return;
	}
	s=start;
	while(s->next!=NULL)
	{
		s=s->next;

	}
	s->next=p;


}
void LinkedList::display()
{
	struct node *p;
	p=start;
	while(p!=NULL)
	{
		printf("data=%d\n",p->data);
		p=p->next;

	}
}

//void createlist(int);
//void display();
void main()
{
	int n,i,d,ch;
	LinkedList l;
	clrscr();
	start=NULL;
	while(1)
	{
	 printf("Enter choice\n");
	 printf("1 Foe Create List\n");
	 printf("2 for display\n");
	 printf("3 for exit\n");
	 scanf("%d",&ch);
	 switch(ch)
	 {
		case 1:
			if(start!=NULL)
			{
				printf("link list all ready create\n");
			}
			printf("enter the no. how many create link list\n");
			scanf("%d",&n);

			for(i=0;i<n;i++)
			{
				printf("Enter the data\n");
				scanf("%d",&d);
			       l.createlist(d);

			}
			printf("List created\n");
		break;

		case 2:
			if(start==NULL)
			{
				printf("link list Not create\n");
				break;
			}
			l.display();
		break;
		case 3:
			exit(1);
	}
	getch();
       }
}
