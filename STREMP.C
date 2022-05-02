#include<stdio.h>
#include<conio.h>
struct employ
{
	int empid;
	char name[20];
	int salary;
}e[10],e4;
void readdata(int);
void show(struct employ[],int);
void main()
{
	int n;
	struct employ e1[15];
	clrscr();
	printf("How many no. of employ \n");
	scanf("%d",&n);
	readdata(n);
	show(e,n);
	getch();
}
void readdata(int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("\nEnter the employ id");
		scanf("%d",&e[i].empid);
		printf("\nEnter the Name");
		scanf("%s",&e[i].name);
		printf("\nEnter the salary");
		scanf("%d",&e[i].salary);
	}
}
void show(struct employ e3[],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=i;j<n-1;j++)
		{
			if(e3[j].name[0]>e3[j+1].name[0])
			{
			   e4=e3[j];
			   e3[j]=e3[j+1];
			   e3[j+1]=e4;
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