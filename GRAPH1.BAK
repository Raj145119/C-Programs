#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
/*struct edge
{       int e;
	struct edge *next;

};*/
struct graph
{
	int e;
      //	int v;
	struct graph *next;
};
struct graph *g[6];
//struct graph *e1=NULL;
void creategraph();
void adjacencylist(int,int);
void main()
{
	//int edge,vertex,i,n;
	clrscr();
	creategraph();
	getch();

}
void creategraph()
{
	int v1,i,j;
	char ch;
	struct graph *temp;
	struct graph *temp1;

	printf("Enter the no.of vertex\n");
	scanf("%d",&v1);
	for(i=1;i<=v1;i++)
	{
		fflush(stdin);
		g[i]->e=i;
		g[i]->next=NULL;
		for(j=1;j<=v1;j++)
		{
			fflush(stdin);
			printf("%u",g[i]->next);
			printf("the edge from %d to %d ?(y/n)",i,j);
			scanf("%c",&ch);
			if(ch=='y')
			{
				 adjacencylist(i,j);

			}
		}
	}

	for(i=1;i<=v1;i++)
	{
		fflush(stdin);
		temp1=g[i];
		printf("\n%d",temp1->e);
		while(temp1->next!=NULL)
		{
			printf("->%d",temp1->next->e);
			temp1=temp1->next;
		}
	}
}
void adjacencylist(int i,int j)
{

	struct graph *temp,*temp1=g[i];
	printf("%d",temp1->next);
	temp=(struct graph *)malloc(sizeof (struct graph));
		temp->e=j;
		temp->next=NULL;
		if(temp1->next==NULL)
		{
			temp1->next=temp;
			//temp1=temp;
		}
		else{
			while(temp1->next!=NULL)
			{
				temp1=temp1->next;
				       //	printf("%d",e1);
			}
			temp1->next=temp;
		}
}