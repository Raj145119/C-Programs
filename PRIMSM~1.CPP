#include<stdio.h>

int v,e,size=0;
int a[100];
int wt[100][100]={0};

struct prim
{
	int key;
	int par;
	int flag;
	int hi;
};

struct prim g[10];

void min_heapify(int i)
{
	int l,r,small,tmp;
	l=2*i;
	r=(2*i)+1;
	
	if(l<=size && g[a[l]].key<g[a[i]].key)
	small=l;
	else
	small=i;
	
	if(r<=size && g[a[r]].key<g[a[small]].key)
	small=r;
	
	if(small!=i)
	{
		tmp=a[small];
		a[small]=a[i];
		a[i]=tmp;
		
		g[a[small]].hi=small;   //new heap index;
		g[a[i]].hi=i;           //new heap index;
		
		min_heapify(small);
	}
}

int extract_min()
{
	int min;
	
	if(size<1)
	{
		printf("heap underflow");
	}
	else
	{
		min=a[1];
		a[1]=a[size];
		
		size--;
		min_heapify(1);
	}
		return min;
}

void build_minheap()
{
	int i;
	for(i=size/2;i>=1;i--)
	{
		min_heapify(i);
	}
}

void decrease_key(int i, int wt)
{
	int tmp;
	if(wt>g[a[i]].key)
	{
		printf("not possible");
	}
	else
	{
		g[a[i]].key=wt;
	}
	
	while(i>1 && g[a[i]].key<g[a[i/2]].key)
	{
		tmp=a[i];
		a[i]=a[i/2];
		a[i/2]=tmp;
		
		g[a[i]].hi=i;      //new heap index
		g[a[i/2]].hi=i/2;  //new heap index
		
		i=i/2;
	}
}

void prim(int r)
{
	int i,u;
	for(i=1;i<=v;i++)
	{
		g[i].key=400000;
		g[i].par=-1;
		g[i].flag=0;
		g[i].hi=i;
	}
	g[r].key=0;
	

	for(i=1;i<=v;i++)
	{
		a[++size]=i;
	}
	

	build_minheap();

	while(size>=1)
	{
		u=extract_min();
		g[u].flag=1;
		
		for(i=1;i<=v;i++)
		{
			if(wt[u][i]!=0)
			{
				if(g[i].flag==0 && wt[u][i]<g[i].key)
				{
					g[i].par=u;
				//	printf("%d",g[i].hi);
					decrease_key(g[i].hi,wt[u][i]);
				}
			}
		}
	}
}

void main()
{
	int i,v1,v2,w,s=0;
	FILE *fp;
	fp=fopen("graph.txt","r");

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
			wt[v1][v2]=w;
			wt[v2][v1]=w;
		}
	}

	prim(6);

	for(i=1;i<=v;i++)
	{
		printf("%d",g[i].key);
	}
	for(i=1;i<=v;i++)
	{
		s=s+g[i].key;
	}
	printf("\nshortest lenght = %d",s);
}
