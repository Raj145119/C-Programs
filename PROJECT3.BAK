#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<string.h>
void create();
void insert();
void display();
struct record
{
	long int id,mo,sal;
	char *name;
	struct record *next;
}*start;
int m,n;
void main()
{
	int ch,i;
	clrscr();
	start=NULL;
	while(1)
	{
		clrscr();
		puts("Enter the choice\n");
		printf("Press 1 for create record\n");
		printf("Press 2 for insert record\n");
		printf("Press 3 for display record\n");
		printf("Press 4 for exit\n");
		scanf("%d",&n);
		switch(n)
		{
			case 1:
				printf("Enter the no record\n");
				scanf("%d",&n);

				if(start!=NULL)
				{
					printf("RRECORD ALL RAEDY CREATE");
					break;
				}
				       /*	puts("Enter the ID\n");
					Scanf("%ld",&id);
					puts("Enter the name\n");
					gets(name);
					puts("Enter the Mo.no\n");
					scanf("%ld",&mo);*/
				for(i=1;i<=n;i++)
				{
					create();

				}
			break;
			case 2:
			       if(start==NULL)
			       {
					printf("Record not create\n");
					break;
			       }

			      /* puts("Enter the ID\n");
			       Scanf("%ld",&id);
			       puts("Enter the name\n");
			       gets(name);
			       puts("Enter the Mo.no\n");
			       scanf("%ld",&mo);*/
			       insert();
			break;
			case 3:
				if(start==NULL)
				{
					printf("No Record created\n");
				}
				display();
			break;
			case 4:
				exit(1);
			default:
				printf("Wrong choice");
		}
		getch();
	}
}
void create()
{
	struct record *p,*q;
	long int id,mo,sal;
	char *name;
	p=(struct record*)malloc(sizeof(struct record));
	puts("Enter the ID");
	scanf("%ld",&id);
	puts("Enter the name");
	scanf("%s",&name);
	puts("Enter the Mo.no");
	scanf("%ld",&mo);
	puts("Enter the sallary");
	scanf("%ld",&sal);
	p->id=id;
	p->name=name;
	p->mo=mo;
	p->sal=sal;
	if(start==NULL)
	{
		start=p;
		return;
	}
	q=start;
	while(q->next!=NULL)
	q=q->next;
	q->next=p;
}
void insert()
{
	struct record *p,*q;
	long int id,mo,sal;
	char *name;
	p=(struct record*)malloc(sizeof(struct record));
	puts("Enter the ID");
	scanf("%ld",&id);
	puts("Enter the name");
	scanf("%s",&name);
	puts("Enter the Mo.no");
	scanf("%ld",&mo);
	puts("Enter the sallary");
	scanf("%ld",&sal);
	p->id=id;
	p->name=name;
	p->mo=mo;
	p->sal=sal;
	q=start;
	while(q->next!=NULL)
	q=q->next;
	q->next=p;
	printf("Record inserted\n");
}
void display()
{
	struct record *p;
	p=start;
	while(p->next!=NULL)
	{
		printf("ID=%ld",p->id);
		printf("Name=%s",p->name);
		printf("Mo=%ld",p->mo);
		printf("Sallary=%ld",p->sal);
		printf("\n");
		p=p->next;
	}
}