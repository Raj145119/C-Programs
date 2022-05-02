#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node *next,*pre;
}*start;
void create(int data1)
{
    struct node *temp,*p;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data1;
    temp->next=NULL;
    if(start==NULL)
    {
	start=temp;
	temp->pre=NULL;
    }
    else
    {
	p=start;
	while(p->next!=NULL)
	{
	    p=p->next;
	}
	p->next=temp;
	temp->pre=p;
    }
}
int delete(int num)
{
    struct node *temp;
    temp=start;
    if(temp->data==num)
    {
	start=temp->next;
	free(temp);
	return num;
    }
    else
    {
	while(temp->next!=NULL)
	{
	    if(temp->next->data==num)
	    {
	       temp->next=temp->next->next;
	       temp->next->pre=temp;
	       free(temp->next);
	       return num;
	    }
	    temp=temp->next;
	}
    }
    return 0;
}
void insert(int item,int pos)
{
    int i;
    struct node *temp,*p;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=item;
    if(pos==1)
    {
	temp->next=start;
	temp->pre=NULL;
	start=temp;
    }
    else
    {
	p=start;
	for(i=1;i<pos-1;i++)
	{
	    p=p->next;
	}
	p->next->pre=temp;
	temp->next=p->next;
	temp->pre=p;
	p->next=temp;



    }
}
void display()
{
    struct node *p;
    p=start;
    if(start==NULL)
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
int main()
{
    int d,i,ch,n;
    while(1)
    {
	printf("\nEnter the 1 for create node");
	printf("\nEnter the 2 for delete node");
	printf("\nEnter the 3 for insert data");
	printf("\nEnter the 4 for display data");
	printf("\nEnter 5 for exit\n");
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
		printf("Enter the value for delete\n");
		scanf("%d",&d);
		n=delete(d);
		printf("data=%d is deleted\n",n);
	    break;
	    case 3:
		printf("Enter the data for insert\n");
		scanf("%d",&d);
		printf("Enter the position\n");
		scanf("%d",&n);
		insert(d,n);
		printf("\nData is inserted\n");
            break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
                break;

        }
    }
}
