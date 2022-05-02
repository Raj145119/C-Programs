#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define ver 20
void bfs(int);
void enqueue(int);
int dequeue();
struct vertex
{

    int color;
    int d;
    int par;
    int visit;
};
struct vertex G[ver];
int r,f,v,e,u;
int q[ver],a[ver][ver];
int main()
{
    int  v1,e1,i,j;
	//int a[10][10];
	FILE *fp;
	clrscr();
	r=f=-1;
    fp=fopen("graph1.txt","r");
	fscanf(fp,"%d%d",&v,&e);
    for(i=1;i<=v;i++)
	{
		for(j=1;j<=v;j++)
		a[i][j]=0;
	}
	printf("v= %d",v);
	for(i=1;i<=e;i++)
	{
		fscanf(fp,"%d %d",&v1,&e1);
		a[v1][e1]=1;
		a[e1][v1]=1;
	}
    bfs(1);
    printf("\n");
	/*for(i=1;i<=v;i++)
	{
		for(j=1;j<=v;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}*/
	for(i=1;i<=v;i++)
	{

	    printf("\n %d par=%d color= %d distance=%d ",i,G[i].par,G[i].color,G[i].d);

	}
	printf("\n************ visiting index ************\n");
	for(i=1;i<=v;i++)
	{
	    printf("%d ",G[i].visit);
	}

	fclose(fp);
	getch();
	return 0;
}
void bfs(int s)
{
    int i,j,k=1;
    //printf("\n v=%d",v);
    for(i=2;i<=v;i++)
    {

	G[i].color=0;
	G[i].d=1000;
	G[i].par=-1;
    }

    G[s].color=1;
    G[s].d=0;
    G[s].par=-1;
    if(f==r==-1){

	printf("Queue is empty\n");
       // break;
    }
    enqueue(s);
    while(!((f==-1)||f==r+1))
    {
	u=dequeue();
	G[k].visit=u;
	k++;
	for(i=1;i<=v;i++)
	{
	  //  printf("asdd\n");
	    if(a[u][i]==1)
	    {
		if(G[i].color==0)
		{
		    G[i].color=1;
		    G[i].par=u;
		    G[i].d=G[u].d+1;
		    enqueue(i);
		}
	    }
	}
    }
    G[u].color=2;
}
void enqueue(int v1)
{
    if(r==ver)
    {
	printf("Queue is full");
    }
    else{

	q[++r]=v1;
	if(f==-1)
	    f=0;
    }
}
int dequeue()
{
    int v1;
    if(r==-1 && f==r+1)
    {
	printf("Queue is empty\n");
    }
    else{

	v1=q[f++];
	if(f==r+1)
	{
	    f=r=-1;
	}
    }
    return v1;
}
