#include<stdio.h>
#include<conio.h>
#define max 10

struct stack
{
	int a[max];
	int top;
};
void push(struct stack *,int);
int pop(struct stack *);
void main()
{
	int n;
	struct stack s;
	clrscr();
	push(&s,5);
	push(&s,10);
	n=pop(&s);
	printf("value= %d",n);
	getch();
}
void push(struct stack *s,int a)
{
	if(s->top==max-1)
	{
		printf("stack is full\n");

	}
	else
	{
		s->top++;
		s->a[s->top]=a;
	}
}

int pop(struct stack *s)
{
	int x;
	if(s->top==-1)
	{
		printf("stack is empty\n");
	}
	else
	{
	       x=s->a[s->top];
	       --s->top;
	}
	return x;
}