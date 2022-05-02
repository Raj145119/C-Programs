#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<system.h>
struct emp
{
	int id;
	char name[20];
	int age;
	float sal;
};
void main()
{
	int id1;
	char another='y',choice;
	struct emp e1;
	FILE *fp;
	fp=fopen("emp.txt","a");
	if(fp==NULL)
	{
		printf("file is not created\n");
		exit(0);
	}
	while(1)
	{
		clrscr();
		//system("cls");
		printf("\t*****MAIN MENUE*****\n");
		printf("1 for Add Record\n");
		printf("2 for Display Record\n");
		printf("3 for Modify record\n");
		printf("4 for Delete record\n");
		printf("0 for Exit");
		printf("Your Choice\n");
		fflush(stdin);
		choice=getche();
		switch(choice)
		{
			case '1':
				fseek(fp,0,SEEK_END);
				while(another=='y')
				{
					printf("Enter the Employ ID:");
					scanf("%d",&e1.id);
					printf("\nEnter the Name: ");
					scanf("%s",e1.name);
					printf("\nEnter the Basic Salary:");
					scanf("%f",&e1.sal);
					fprintf(fp,"%d",e1.id);
					fprintf(fp,"%c",e1.name);
					fprintf(fp,"%f",e1.sal);
					printf("Add another record(y/n)");
					fflush(stdin);
					another=getche();
				}
				break;
				case '2':
				while(!feof(fp))
				{
					fsacf(fp,"%d %s %f",&e1.id,e1.name,&e1.sal);
					prinf("\n%d\t%s \t%f",e1.id,e1.name,e1.sal);
				}
				break;
				case '3':
				another='y';
				while(another='y')
				{
					printf("Enter the ID of Employ\n");
					scanf("%d",&id1);
					rewind(fp);
					while(fread(&
				}


		}
	}

	fclose(fp);
	//getch();
}