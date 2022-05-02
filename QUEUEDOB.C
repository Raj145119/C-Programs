
#include<stdio.h>
#include<conio.h>
#define max 5
int queue[max],right=-1,left=-1,n;
void insert();
void delete1();
void display();
void main()
{
	int ch;
	clrscr();
	while (1)
	{
		clrscr();
		printf("ENTER THE CHOICE\n");
		printf("ENTER  1: for insert\n");
		printf("ENTER  2:for delete\n");
		printf("ENTER  3: for display\n");
		printf("ENTER  4: for exit\n");
		scanf("%d",&ch);

	     switch(ch)
	     {
			case 1:
				insert();
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
void insert()
{
	if(right==0 && left==max-1)
	{
		printf("QUEUE IS OVER FLOW\n");
		return;
	}
	printf("enter the data\n");
	scanf("%d",&n);
	if(right==-1)
	{
		left=0;
		right=0;
		queue[left]=n;
		printf("Data inserted at position%d\n",left+1);
	}
	else
	{
		left++;
		queue[left]=n;
		printf("Data inserted at position%d\n",left+1);
	}
}
void delete1()
{
	if(right==-1||right>left)
	{
		printf("queue is empty\n");
		return;
	}

	if(left==right)
	{
		left=-1;
		right=-1;
	}

		printf("ENTER  1:RETRIVAL FROM LEFT\n");
		printf("ENTER  2:RETRIVAL FROM RIGHT\n");
		scanf("%d",&n);
		switch(n)
		{
			case 1:
			printf("%d",queue[right]);
			right++;
			break;
			case 2:
			printf("%d",queue[left]);
			left--;
		}

}
void display()
{
	int i;
	if(right==-1||right>left)
	{
		printf("queue is empty\n");
		return;
	}
	for(i=right;i<=left;i++)
	{
		printf("DATA= %d\n",queue[i]);
	}

}