#include<stdio.h>
#include<conio.h>
#define max 10
int r,f,a[max];
void enqueue(int);
int dequeue();
void main()
{
	int n;
	clrscr();
	enqueue(5);
	enqueue(6);
	n=dequeue();
	printf("%d",n);
	getch();

}
void enqueue(int n)
{

	if(r==max-1)
	{
		printf("qeuqe is full\n");
	}
	else
	{
	      ++r;
	      a[r]=n;

	}
	  if(f==-1)
	      {
		++f;
	      }
}
int dequeue()
{
	int x;
	if(r==f)
	{
		printf("Queqe is empty\n");

	}
	x=a[f];
	f++;
	return x;
}