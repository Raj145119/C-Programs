#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#define max 10
struct stak
{
	int data;
	struct stak *next;
}*last;
int top=-1,m,n;
void push(int);
void pop();
void display();
void search(int);
void count();
void main()
{
	int i,ch;
	last=NULL;
	clrscr();
	printf("..........................stak using link list.............\n");
	while (1)
	{
		clrscr();
		printf("ENTER THE CHOICE\n");
		printf("ENTER  1: for push\n");
		printf("ENTER  2:for pop\n");
		printf("ENTER  3: for display\n");
		printf("ENTER  4:for search\n");
		printf("ENTER  5:for count\n");
		printf("ENTER  6: for exit\n");
		scanf("%d",&ch);

	     switch(ch)
	     {
			case 1:
				if(top==max-1)
				{
					printf("stak over flow \n");
					break;
				}

					printf("ENTER THE DATA\n");
					scanf("%d",&m);
					push(m);

			break;
			case 2:
				if(top==-1)
				{
					printf("stak is empty....\n");
					break;
				}
				pop();
			break;
			case 3:
				if(top==-1)
				{
					printf("stack is empty....\n");
					break;
				}
				display();
			break;
			case 4:
			       if(top==-1)
				{
					printf("stack is empty....\n");
					break;
				}
				printf("Enter the data to search\n");
				scanf("%d",&m);
				search(m);
			break;
			case 5:
				if(top==-1)
				{
					printf("stack is empty....\n");
					break;
				}
				count();
			break;
			case 6:
				exit();
			default:
				printf("WRONG POSITION\n");
	     }
	     getch();
      }
}
void push(int item)
{
	struct stak *tmp,*p;
	tmp=(struct stak*)malloc(sizeof(struct stak));
	top++;
	tmp->data=item;
	if(last==NULL)
	{
		tmp->next=NULL;
		last=tmp;

		return;
	}
	p=last;
	tmp->next=p;
	last=tmp;

}
void pop()
{
	struct stak *p;
	p=last;
	printf("%d DATA=%d\n",(top+1),p->data);
	last=p->next;
	top--;
}
void display()
{
	struct stak *p;
	int n=1;
	p=last;
	while(p!=NULL)
	{
		printf("%d data=%d\n",n++,p->data);
		p=p->next;
	}
}
void search(int item)
{
	struct stak *p;
	p=last;
	while(p!=NULL)
	{
		if(p->data==item)
		{
			printf("data is found is %d\n ",p->data);
			return;
		}
		p=p->next;
	}
	printf("data not found in stak\n");
}
void count()
{
	int i=0;
	struct stak *p;
	p=last;
	while(p!=NULL)
	{
		i++;
		p=p->next;
	}
	printf("total no of data in stak%d\n  ",i);
}

