#include<stdio.h>
#include<conio.h>
struct employ
{
	int empid;
	char name[20];
	int salary;
}e;
void readdata(struct employ[],int);
void show(struct employ[],int);
void main()
{
	int n;
	struct employ e1[15];
	clrscr();
	printf("How many no. of employ \n");
	scanf("%d",&n);
	readdata(e1,n);
	show(e1,n);
	getch();
}
void readdata(struct employ e2[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("\nEnter the employ id");
		scanf("%d",&e2[i].empid);
		printf("\nEnter the Name");
		scanf("%s",&e2[i].name);
		printf("\nEnter the salary");
		scanf("%d",&e2[i].salary);
	}
}
void show(struct employ e3[],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=i;j<n-1;j++)
		{
			if(e3[j].empid>e3[j+1].empid)
			{
			   e=e3[j];
			   e3[j]=e3[j+1];
			   e3[j+1]=e;
			}
		}
	}
	printf("\nEMPID\tNAME\t\tSALARY");
	for(i=0;i<n;i++)
	{
		printf("\n%d",e3[i].empid);
		printf("\t%s",e3[i].name);
		printf("\t\t%d",e3[i].salary);
	}
}