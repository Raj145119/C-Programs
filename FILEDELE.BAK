#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct emp
{
	int id;
	char name[20];
	int age;
	float sal;
};
void main()
{
	char another='y';
	int id1;
	struct emp e1;
	FILE *fp,*fp1;
	clrscr();
	fp=fopen("emp1.txt","r");
	fp1=fopen("emp2.txt","a");
	if(fp==NULL)
	{
		printf("file is not created\n");
		exit(0);
	}
	printf("DELETE THE RECORD\n");
	while(another=='y')
	{
		printf("\nEnter the Employ ID:");
		scanf("%d",&id1);
		while(!feof(fp))
		{
		if(id1==e1.id)
		continue;
		fscanf(fp1,"%d %s %f",&e1.id,e1.name,&e1.sal);
		fprintf(fp1,"%d %s %f",e1.id,e1.name,e1.sal);
		}
		printf("Delete another record(y/n)");
		another=getche();
	}
	fclose(fp);
	//getch();
}