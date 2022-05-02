//insertion at beginning in single link list in holi.
#include<stdio.h>
#include<conio.h>
#include<malloc.h>
void insAtBeg(struct node **,int num);
struct node
{
int data;
struct node *next;
};
void insAtBeg(struct node  **q,int num)
{
struct node *temp,*p;
p=*q;
temp=(struct node *)malloc(sizeof(struct node));
temp->data=num;
if(p==NULL)
	{
	printf("list has no data.Now one node is created");
	p=temp;
	temp->next=p;
	*q=p;
	}
	else
	{
	//temp->data=num;
	temp->next=*q;
	*q=temp;
	}

}
void display(struct node  **s)
{
//struct node *start;
struct node *m;
m=*s;
printf("link list(node) is followings\n");
while((*s)!=NULL)
	{
	  printf("\n %d->",(*s)->data);
	  *s=(*s)->next;
	}
}

void main()
{
int n,i,num;
struct node *start;
start=NULL;
clrscr();
printf("enter number of node=");
scanf("%d",&n);
for(i=0;i<n;i++)
	{
	 printf("%d node=",i+1);
	 scanf("%d",&num);
	 insAtBeg(&start,num);
	 }
display(&start);
getch();
}
