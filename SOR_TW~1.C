#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
  int data;
  struct node *next;
}*start1,*start3;
struct node1
{
  int data;
  struct node1 *next;
}*start2;
void display()
{
    struct node *p;
    p=start1;
    if(start1==NULL)
    {
	printf("Node not created\n");
    }
    else
    {
	printf("data=%d\n",p->data);
	while(p->next!=NULL)
	{
	    printf("data=%d\n",p->next->data);
	    p=p->next;
	}
    }
}
void display1()
{
    struct node1 *p;
    p=start2;
    if(start2==NULL)
    {
	printf("Node not created\n");
    }
    else
    {
	printf("data=%d\n",p->data);
	while(p->next!=NULL)
	{
	    printf("data=%d\n",p->next->data);
	    p=p->next;
	}
    }
}

void display2()
{
    struct node *p;
    p=start3;
    if(start3==NULL)
    {
	printf("Node not created\n");
    }
    else
    {
	printf("data=%d\n",p->data);
	while(p->next!=NULL)
	{
	    printf("data=%d\n",p->next->data);
	    p=p->next;
	}
    }
}

void create(int a)
{
    struct node *temp,*p;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=a;
    temp->next=NULL;
    if(start1==NULL)
    {
	start1=temp;
    }
    else
    {
	p=start1;
	while(p->next!=NULL)
	p=p->next;
	p->next=temp;
    }
}

void create1(int a)
{
    struct node1 *temp,*p;
    temp=(struct node1 *)malloc(sizeof(struct node1));
    temp->data=a;
    temp->next=NULL;
    if(start2==NULL)
    {
	start2=temp;
    }
    else
    {
	p=start2;
	while(p->next!=NULL)
	p=p->next;
	p->next=temp;
    }
}
/*void shorting()
{
    struct node *temp,*temp1,*start3;
    temp=(struct node*)malloc(sizeof(struct node));
    if(start1->data<start2->data)
    {
	temp->data=start1->data;
	temp->next=NULL;
	start1=start1->next;
	start3=temp;
    }
    else
    {
	temp->data=start2->data;
	temp->next=NULL;
	start2=start2->next;
	start3=temp;
    }
    while(start1!=NULL||start2!=NULL)
    {
	temp1=(struct node*)malloc(sizeof(struct node));
	if(start1->data<start2->data)
	{
	    temp1->data=start1->data;
	    temp1->next=NULL;
	    temp->next=temp1;
	    temp=temp->next;
	    start1=start1->next;
	}
	else
	{
	    temp1->data=start2->data;
	    temp1->next=NULL;
	    temp->next=temp1;
	    temp=temp->next;
	    start2=start2->next;
	}
    }
    if(start1==NULL)
    {
	while(start2!=NULL)
	{
	    temp1=(struct node*)malloc(sizeof(struct node));
	    temp1->data=start2->data;
	    temp1->next=NULL;
	    temp->next=temp1;
	    temp=temp->next;
	    start2=start2->next;
	}
    }
    if(start2==NULL)
    {
	while(start1!=NULL)
	{
	    temp1=(struct node*)malloc(sizeof(struct node));
	    temp1->data=start1->data;
	    temp1->next=NULL;
	    temp->next=temp1;
	    temp=temp->next;
	    start1=start1->next;
	}
    }
*/
void shorting()
{
    struct node *temp;
    if(start1->data<start2->data)
    {
	temp=start1;
	start1=temp->next;
	start3=temp;
    }
    else
    {
	temp=start2;
	start2=temp->next;
	start3=temp;
    }
    while(start1!=NULL&&start2!=NULL)
    {
	if(start1->data<start2->data)
	{
	    temp->next=start1;
	    temp=start1;
	    start1=temp->next;
	}
	else
	{
	    temp->next=start2;
	    temp=start2;
	    start2=temp->next;
	}
    }
    if(start1==NULL)
    {
	temp->next=start2;
    }
    if(start2==NULL)
    {
	temp->next=start1;
    }
}

int main()
{
    int d,i,ch,n;
    start1=NULL;
    start3=NULL;
    start2=NULL;
    while(1)
    {
	printf("\nEnter the 1 for create first link list");
	printf("\nEnter the 2 for create second link list node");
	printf("\nEnter the 3 for  shorting link list");
	printf("\nEnter the 4 for display 1st link list");
	printf("\nEnter the 5 for display 2nd link list");
	printf("\nEnter the 6 for display 3st link list");
	printf("\nEnter 7 for exit\n");
	scanf("%d",&ch);
	switch(ch)
	{
	    case 1:
		printf("Enter the no. of node\n");
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
		    printf("Enter the data\n");
		    scanf("%d",&d);
		    create(d);
		}
	    break;
	    case 2:
	printf("Enter the no. of node\n");
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
		    printf("Enter the data\n");
		    scanf("%d",&d);
		    create1(d);
		}
	    break;
	    case 3:
		shorting();
	    break;
            case 4:
                display();
                break;
            case 5:
                display1();
            break;
            case 6:
		display2();
	    break;
            case 7:
		exit(0);
                break;

        }
    }
}
