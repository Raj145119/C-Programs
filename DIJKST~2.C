#include<stdio.h>
#include<conio.h>
int adj[10][10]={0},w[10][10]={0};
int a[10],heapsize,V,E;

struct graph{
		int d;
		int par;
		int hi;
	};
	struct graph g[10];

	void min_heapify (int i)
{
	int left  = 2*i;
	int right = 2*i+1;
	int smallest,tmp;
	if(left <= heapsize && g[a[left]].d< g[a[i]].d )
	smallest = left;
	else
	smallest = i;
	if(right <= heapsize && g[a[right]].d <g[a[smallest]].d )
	smallest = right;
	if(smallest != i)
	{
	tmp=a[i];
	a[i]=a[smallest];
	a[smallest]=tmp;

	g[a[smallest]].hi=smallest;
	g[a[i]].hi=i;
	min_heapify (smallest);
	}
}
	void bulid_minheap(int heapsize)
{
	int i,s;
	s=heapsize;
	for(i=s/2;i>=1;i--)
	min_heapify(i);

}

int extract_min ()
{
	int min;
    if(heapsize == 0)
    {
      printf("\nCan't remove element since queue is empty");
	return 0;
    }

     min = a[1];
    a[1] = a[heapsize];
    heapsize = heapsize -1;
    min_heapify(1);
    return min;
}
 void decrease_key(int u, int v, int w)
{
	int temp;
	g[a[v]].d= g[u].d+ w;
	while(v>1 && g[a[v]].d<g[a[v/2]].d)
	{
		temp=a[v];
		a[v]=a[v/2];
		a[v/2]=temp;

		g[v].hi=v;
		g[v/2].hi=v/2;

		v=v/2;
	}
}
 void initialize(int s)
 {
	int i;
	for(i=2;i<=V;i++)
	{
		g[i].par=-1;
		g[i].d=10000;

	 }
	 g[s].d=0;
	 g[s].par=-1;
 }

 void relax(int u, int v,int w)
 {
	if(g[a[v].d>g[u].d+w)
	{
		g[a[v].par=u;
		decrease_key(u,v,w);
	}
 }

 void dijkstra(int r)
 {
	int i,u,j=1;

	int s[10]={0};
	initialize(r);
	for(i=1;i<=V;i++)
	{
		a[i]=i;
		g[i].hi=i;
	       //	g[i].par=-1;
		//g[i].flag=0;
	 }
	 heapsize=V;
	 bulid_minheap(heapsize);
	 while(heapsize>=1)
	 {
		u=extract_min();
		printf("\tu=%d",u);
		//g[u].flag=1;
		s[j++]=u;
		for(i=1;i<=V;i++)
	   {
	       if(adj[u][i]==1)
	    {

		relax(u,g[i].hi,w[u][i]);
	    }
	}
    }
 }

int main()
{
   int i,j,v1, v2,x;
	FILE *fp;
	clrscr();
	fp=fopen("dijs.txt","r");
	if(fp==NULL)
	{
		printf("\n error occuring at opening of file");
		return 0;
	}
	fscanf(fp,"%d %d", &V,&E);
	printf("\n v=%d and e=%d",V,E);
	for(i=1;i<=E;i++)
	{
		fscanf(fp,"%d %d %d",&v1,&v2,&x);
		 printf("\n v1=%d and v2=%d",v1,v2);
		adj[v1][v2]=1;
		w[v1][v2]=x;

	}
	dijkstra(1);
	printf("\n \n");
	for(i=1;i<=V;i++)
	{
		printf("\n i=%d   distance=%d  parent =%d  ", i, g[i].d, g[i].par);
	}
	fclose(fp);
	getch();
	return 0;
}

