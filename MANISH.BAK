#include<stdio.h>
#include<conio.h>
#define max 5
void equeue(struct queue *,int);
int dqueue(struct queue *);
void display(struct queue *);
struct queue
{
	int a[max];
	int rear;
	int front;
};
int main()
{
	struct queue q;
	int n,i,del;
	q.rear=-1;
	q.front=-1;
	printf("number of element in queue=%d",max);
	for(i=0;i<max;i++)
		{
			printf("enter %d element in queue=");
			scanf("%d",&n);
			equeue(&q,n);
		}
		display(&q);
		del=dqueue(&q);
		printf("deleted element in queue=%d",del);
		display(&q);
return 0;
}
void equeue(struct queue *q,int n)
{
	if(q->rear==max-1)
	printf("stack is full. No more insertion is possible");
	else
	{
		if(q->rear==-1 && q->front==-1)
		q->front=0;
		else
		{
			q->a[++q->rear]=n;
		}
	}
}

int dqueue(struct queue *q)
{
	int del;
	if(q->front==-1 || q->front==q->rear+1)
	printf("queue is empty.so deletion operation is not performed");
	else
	{
		del=q->a[q->front++];
	}
	return del;
}
void display(struct queue *q)
{
	int i;
	if(q->rear==-1 || q->front==q->rear+1)
	printf("queue is empty");
	else
	for(i=q->front;i<=q->rear;i++)
	printf("%d",q->a[i]);
}
