#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<string.h>
struct employ
{
	char name;
       long int id,mo,sallary;
	struct employ *next;

}*start;

void address();
void employaddress();
//void employ();
void create_employ_record(char, int, int, int);
void insert_new_record(char, int, int, int, int);
void show_all_record();
//void show_single_record();
int m,n,i;
void main()
{
	long int s,mo,id;
	char n;
	char *pwrd="raj",*upass,cp;

	clrscr();
	start=NULL;
       //	textcolor(GREEN);
       //	textbagroundcolor(6);

	printf("Enter the choice\n");
	printf("Enter 1: for Admin login\n");
	printf("Enter 2: for Employ login\n");
	printf("Enter the 3: for exit\n");

	scanf("%d",&m);

	switch(m)
	{
		case 1:
		       while(2)
		       {
				printf("Enter the password\n");
				i=1;
				while(i<5)
				{
					cp=getch();
					upass[i]=cp;
					putchar('*');
					i++;
				}
				getch();
				if(strcmp(pwrd,upass))
				{
		 while(1)
		 {
			printf("Enter the your chice\n");
			printf("Enter 1:for create record\n");
			printf("Enter 2:for insert new record\n");
			printf("Enter 3:for show all record\n");
			printf("Enter 4:for show a single recod\n");
			printf("Enter 5:for exit\n");
			scanf("%d",&m);

			switch(m)
			{
			case 1:
				if(start!=NULL)
				{
					printf("created record\n");
					break;
				}
				printf("Enetr the no. of employee record\n");
				scanf("%d",&m);
				for(i=1;i<=m;i++)
				{
					printf("Enter the employ name\n");
					scanf("%s",&n);
					printf("Enter the employ id\n");
					scanf("%d",&id);
					printf("Enter the employ mo.no\n");
					scanf("%d",&mo);
					printf("Enter the emlpoy sallary\n");
					scanf("%d",&s);
					create_employ_record(n,id,mo,s);
				}
				break;
			case 2:
				if(start==NULL)
				{
					printf("No created record\n");
				break;
				}
				printf("Enter the position\n ");
				scanf("%d",&m);
				printf("Enter the employ name\n");
				scanf("%s",&n);
				printf("Enter the employ id\n");
				scanf("%d",&id);
				printf("Enter the employ mo.no\n");
				scanf("%d",&mo);
				printf("Enter the emlpoy fee\n");
				scanf("%d",&s);
				insert_new_record(n,id,mo,s,m);

				break;
			case 3:
				if(start==NULL)
				{
					printf("No created record\n");
				break;
				}
				show_all_record();
				break;
		      /*	case 4:
				if(start==NULL)
				{
					printf("No created record\n");
				break;
				}
			      //	show_single_record();
			break; */
			case 5:
				exit();
				break;
			 default:
			 printf("Wrong choice\n");
			}
		   }
		 }


		case 2:
		while(3)
		       {
				printf("Enter the password\n");
				i=1;
				while(i<5)
				{
					cp=getch();
					upass[i]=cp;
					putchar('*');
					i++;
				}
				getch();
				if(strcmp(pwrd,upass))
				{
		 while(1)
		 {
			printf("Enter the your chice\n");
			printf("Enter 1:for create record\n");
			printf("Enter 2:for insert new record\n");
			printf("Enter 3:for show all record\n");
			printf("Enter 4:for exit\n");
			scanf("%d",&m);

			switch(m)
			{
			case 1:
				if(start!=NULL)
				{
					printf("created record\n");
					break;
				}
				printf("Enetr the no. of employee record\n");
				scanf("%d",&m);
				for(i=1;i<=m;i++)
				{
					printf("Enter the employ name\n");
					scanf("%s",&n);
					printf("Enter the employ id\n");
					scanf("%d",&id);
					printf("Enter the employ mo.no\n");
					scanf("%d",&mo);
					printf("Enter the emlpoy sallary\n");
					scanf("%d",&s);
					create_employ_record(n,id,mo,s);
				}
			break;
			case 2:
				if(start==NULL)
				{
					printf("No created record\n");
				break;
				}
				printf("Enter the position\n ");
				scanf("%d",&m);
				printf("Enter the employ name\n");
				scanf("%s",&n);
				printf("Enter the employ id\n");
				scanf("%d",&id);
				printf("Enter the employ mo.no\n");
				scanf("%d",&mo);
				printf("Enter the emlpoy fee\n");
				scanf("%d",&s);
				insert_new_record(n,id,mo,s,m);

			break;
			case 3:
				if(start==NULL)
				{
					printf("No created record\n");
				break;
				}
				show_all_record();
				break;

			case 4:
				exit();
				break;
			 default:
			 printf("Wrong choice\n");
			}
		   }
		 }

		break;
	      }
		case 3:
			exit();
		default:
		printf("Wrong choce\n");

	 }
	}
	getch();

}

void create_employ_record(char nm,int ide,int m,int fe)
{
	struct employ *ptr,*p;
	ptr=(struct employ*)malloc(sizeof(struct employ));
	ptr->name=nm;
	ptr->id=ide;
	ptr->mo=m;
	ptr->sallary=fe;
	ptr->next=NULL;
	if(start==NULL)
	{
		start=ptr;
		return;
	}
	p=start;
	while(p->next!=NULL)
	p=p->next;
	p->next=ptr;
}
void insert_new_record(char nm,int ide,int m,int fe,int pos)
{
	struct employ *ptr,*p;
	int i;
	ptr=(struct employ*)malloc(sizeof(struct employ));
	ptr->name=nm;
	ptr->id=ide;
	ptr->mo=m;
	ptr->sallary=fe;
	if(pos==1)
	{
		ptr->next=start;
		start=ptr;
		return;
	}
	p=start;
	for(i=1;i<pos-1;i++)
	{
		p=p->next;
	}
	if(p==NULL)
	{
		printf("Wrong position\n");
		return;
	}

	ptr->next=p->next;
	p->next=ptr;
}

void show_single_record()
{
	struct employ *p;

	p=start;
	printf(" %s",p->name);
	printf(" %d",p->id );
	printf(" %d",p->mo);
	printf(" %d",p->sallary);
}

void show_all_record()
{
	struct employ *p;
	p=start;
	while(p->next!=NULL)
	{
		p=start;
		printf(" %s",p->name);
		printf(" %d",p->id );
		printf(" %d",p->mo);
		printf(" %d",p->sallary);
		p=p->next;
	}
}
