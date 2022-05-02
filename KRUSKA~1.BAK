#include<stdio.h>
#include<conio.h>
struct edge
{
	int u;
	int v;
	int weight;
};

struct vertex
{
	int par;
	int rank;
};

struct edge edg[50];
struct vertex ver[20];

int V,E,c=0,size=0;

void max_heapify(int a[],int i)
{
	int l,r,tmp,large;
	l=2*i;
	r=(2*i)+1;

	if(l<=size && edg[a[l]].weight>edg[a[i]].weight)
	{
		large=l;
	}
	else
		large=i;

	if(r<=size && edg[a[r]].weight>edg[a[large]].weight)
	{
		large=r;
	}

	if(large!=i)
	{
		tmp=a[i];
		a[i]=a[large];
		a[large]=tmp;

		max_heapify(a,large);
	}
}


void build_maxheap(int a[])
{
	int i;
	for(i=size/2;i>=1;i--)
	{
		max_heapify(a,i);
	}
}

void heapsort(int a[])
{
	int i,temp;
	build_maxheap(a);
	for(i=E;i>=2;i--)
	{
		temp=a[1];
		a[1]=a[i];
		a[i]=temp;

		size--;
		max_heapify(a,1);
	}
}

int find_set(int x)
{
	if(x!=ver[x].par)
	{
		ver[x].par=find_set(ver[x].par);
	}
	return ver[x].par;
}

void link(int x,int y)
{
	if(ver[x].rank>ver[y].rank)
	{
		ver[y].par=x;
	}
	else
	{
		ver[x].par=y;
		if(ver[x].rank==ver[y].rank)
		{
			ver[y].rank++;
		}
	}
}

void Union(int x,int y)
{
	link(find_set(x),find_set(y));
}

void makeset(int i)
{
	ver[i].par=i;
	ver[i].rank=0;
}

void kruskal()
{
	int i,tmp, A[20][10];
	int a[100];

	for(i=1;i<=V;i++)
	{
		makeset(i);
	}

	for(i=1;i<=E;i++)
	{
		a[++size]=i;
	}

	heapsort(a);

	for(i=1;i<=E;i++)
	{
		if( find_set(edg[a[i]].u)  != find_set(edg[a[i]].v) )
		{
			A[c][0]=edg[a[i]].u;    //  2D array list containg vertices of edge which
			A[c][1]=edg[a[i]].v;    //  are taken  from graph according to their length in increasing order
			c++;

			Union(edg[a[i]].u,edg[a[i]].v);
		}
	}

	printf("edge\n");
	for(i=0;i<c;i++)
	{
		printf("%d-%d\n",A[i][0],A[i][1]);
	}
}

void main()
{
	int a[20],i,v1,v2,wt;
	FILE *fp=fopen("spn.txt","r");
	clrscr();
	if(fp==NULL)
	{
		printf("file not found");
	}
	else
	{
		fscanf(fp,"%d%d",&V,&E);

		for(i=1;i<=E;i++)
		{
			fscanf(fp,"%d%d%d",&v1,&v2,&wt);
			edg[i].u=v1;
			edg[i].v=v2;
			edg[i].weight=wt;
		}
	}

	kruskal();
	getch();
}
