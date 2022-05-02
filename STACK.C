#include<stdio.h>
#include<conio.h>
#define MAX 10
int stack[MAX],top=-1;
void push(int);
void pop();
void display();
void search(int);
void count();
void main()
{
	int n,ch;
	clrscr();
	while(1)
	{
		printf("\nEnter the 1 : For Push\n");
		printf("Enter the 2 : For Pop\n");
		printf("Enter the 3 : For Display\n");
		printf("Enter the 4 : For Search\n");
		printf("Enter the 5 : for count\n");
		printf("Enter the 6 : For Exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				if(top==MAX-1)
				{
					printf("Stack is Overflow\n");
					break;
				}
				printf("Enter the data\n");
				scanf("%d",&n);
				push(n);
				break;
			case 2:
				if(top==-1)
				{
					printf("Stack is Empty\n");
					break;
				}
				pop();
				break;
			case 3:
				if(top==-1)
				{
					printf("Stack is Empty\n");
					break;
				}
				display();
				break;
			case 4:
				if(top==-1)
				{
					printf("Stack is Empty\n");
					break;
				}
				printf("Enter the data for Search\n");
				scanf("%d",&n);
				search(n);
				break;
			case 5:
				if(top==-1)
				{
					printf("Stack id Empty\n");
					break;
				}
				count();
				break;
			case 6:
				exit(1);
				break;
			default:
				printf("Wrong Choice\n");

		}
		getch();
	}
}
void push(int item)
{
	top++;
	stack[top]=item;
	printf("Data pushed\n");
}
void pop()
{
	printf("The Data is =%d",stack[top]);
	top--;
}
void display()
{
	int i;
	for(i=top;i>=0;i--)
	printf("\nData is = %d",stack[i]);
}
void search(int item)
{
	int i;
	for(i=0;i<=top;i++)
	{
		if(item==stack[i])
		{
			printf(" \n Data is Found %d position",i+1);
			return;
		}
	}
		printf("\nData is not Found");
}
void count()
{
	int i;
	for(i=0;i<=top;i++);
	printf("\nTotal No. of data is %d",i);
}