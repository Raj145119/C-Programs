#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
      //	FILE *fp;
	int  v1,e1,i,j;
	int  v=0,e=0;
	int a[10][10];
	FILE *fp;
	clrscr();
	fp=fopen("graph.txt","r");
	fscanf(fp,"%d%d",&v,&e);
	//printf("%d %d",v,e);
	for(i=1;i<=v;i++)
	{
		for(j=1;j<=v;j++)
		a[i][j]=0;
	}
	for(i=1;i<=e;i++)
	{
		fscanf(fp,"%d %d",&v1,&e1);
		a[v1][e1]=1;
		a[e1][v1]=1;
	}

	for(i=1;i<=v;i++)
	{
		for(j=1;j<=v;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
	fclose(fp);
	getch();
}