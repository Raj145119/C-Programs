#include<stdio.h>
#include<conio.h>
#define max 10
void push(int);
int pop();
void priority(int);
void display();

int arr[max],r=-1,f=-1;
void main()
{
    int n,p;
    while(1)
    {
	printf("\nEnter the 1 for inqueue \n");
	printf("Enter the 2 for dequeue\n");
	printf("Enter the 3 for display\n");
	printf("Enter the  4 for exit\n");
	scanf("%d",&n);
	switch(n)
	{
	    case 1:

		printf("Enter the data\n");
		scanf("%d",&p);
		push(p);
		break;
	    case 2:
		n=pop();
		printf("data=%d",n);
		break;
	    case 3:
		display();
		break;
	    case 4:
		exit(1);
		break;
	    default:
		printf("Wrong input\n");
	}

    }
}

void push(int p)
{
    if(r==max-1)
    {
	printf("queue is full\n");
    }
    if(f==-1 && r==-1)
    {

	    f++;
	    r++;
	    arr[r]=p;
	    return;
    }
    else
	priority(p);
	r++;
}
void priority(int data)
{
       int i,j;
       for(i=0;i<=r;i++)
       {
	if(data>=arr[i])
	{
		for(j=r+1;j>i;j--)
		{
			arr[j]=arr[j-1];
		}
		arr[i]=data;
		return;
	}
       }
       arr[i]=data;
}
int pop()
{
    int x;
    if((f==-1)||(f==r+1))
    {
	printf("\nqueue is empty\n");
	r=f=-1;
	return 0;
    }
    else
    {
	x=arr[f];
	f++;
	return x;
    }

}

void display()
{
	int i;
	for(i=f;i<r;i++)
	{
		printf("%d ",arr[i]);
	}
}