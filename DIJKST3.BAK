#include<stdio.h>
#include<stdlib.h>
int v,e,size=0;
int a[100];
int wt[100][100]={0};
int adj[100][100]={0};
int arr[5];
struct graph
{
	int par;
      //	int flag;
	int d;
	int hi;
};
struct graph G[10];

void min_heapify(int i)
{
	int l,r,small,tmp;
	l=2*i;
	r=(2*i)+1;

	if(l<=size && G[a[l]].d<G[a[i]].d)
	small=l;
	else
	small=i;

	if(r<=size && G[a[r]].d<G[a[small]].d)
	small=r;

	if(small!=i)
	{
		tmp=a[small];
		a[small]=a[i];
		a[i]=tmp;

		G[a[small]].hi=small;   //new heap index;
		G[a[i]].hi=i;
		min_heapify(small);
	}
}

int extract_min()
{
	int min,i;

	if(size<1)
	{
		printf("heap underflow");
	}
	else
	{
		min=a[1];
		a[1]=a[size];
	      //	printf(" min=%d ",min);
		size--;
		min_heapify(1);

		return min;
	}
	return 0;
}

void build_minheap()
{
	int i;
	for(i=size/2;i>=1;i--)
	{
		min_heapify(i);
	}
}
void initialise_single_source(int s)
{
	int i;
	for(i=1;i<=v;i++)
	{
		G[i].d=999;
		G[i].par=-1;
		G[i].hi=i;
		//G[i].flag=1;
	}
	G[s].d=0;
}
void relax(int u,int i,int ww)
{
	int tmp;
	if(G[a[i]].d>(G[u].d+ww))
	{
		G[a[i]].d=G[u].d+ww;
		G[a[i]].par=u;
	}
	while(i>1 && G[a[i]].d<G[a[i/2]].d)
	{
		tmp=a[i];
		a[i]=a[i/2];
		a[i/2]=tmp;

		G[a[i]].hi=i;      //new heap index of vertices after swapping there position
		G[a[i/2]].hi=i/2;

		i=i/2;
	}
}

void dijkstra(int s)
{

	int i,u,j=0;
	initialise_single_source(s);
	for(i=1;i<=v;i++)
	{
		a[++size]=i;

	}

	build_minheap();
	while(size>=1)
	{
		u=extract_min();
		arr[++j]=u;
		printf("u ==%d\n",u);
		for(i=1;i<=v;i++)
		{
			if(adj[u][i]!=0)
			{
				relax(u,G[i].hi,adj[u][i]);
			}
		}
	}


}

int main()
{
	int i,v1,v2,w;
	FILE *fp;
	clrscr();
	fp=fopen("dijs.txt","r");

	if(fp==NULL)
	{
		printf("file not found");
	}
	else
	{
		fscanf(fp,"%d%d",&v,&e);

		for(i=1;i<=e;i++)
		{
			fscanf(fp,"%d%d%d",&v1,&v2,&w);
			adj[v1][v2]=w;

		//	wt[v1][v2]=w;

		}
	}

	dijkstra(1);
	printf("\nvertex       weight\n");
	for(i=1;i<=v;i++)
	{
		printf("%d\t%d\n",i,G[i].d);
	}
	printf("\n");
	printf("\n Sequence wise vertex extracted:	");
	for(i=1;i<=5;i++)
	{
		printf("%d->",arr[i]);
	}
	return 0;

}

