#include<stdio.h>
#include<conio.h>
void main()
{
	int rollno[2],marks[2][4],i,j;
	char name[2][20];
	clrscr();
	printf("\n Enter the 5 student record");
	for(i=0;i<2;i++)
	{
		printf("\nEnter the %d student name",i+1);
		gets(name[i]);
		printf("\nEnter the %d studennt roll no",i+1);
		scanf("%d",&rollno);
		for(j=0;j<4;j++)
		{
			if(j==0)
			{
				printf("\n Enter the marks of BIS subject");
				scanf("%d",&marks[i][j]);
			}
			       else  if(j==1)
			{
				printf("\n Enter the marks of FOM subject");
				scanf("%d",&marks[i][j]);
			}
				else if(j==2)
			{
				printf("\n Enter the marks of FC subject");
				scanf("%d",&marks[i][j]);
			}
				else if(j==3)
			{
				printf("\n Enter the marks of MF subject");
				scanf("%d",&marks[i][j]);
			}
		}
	}
	printf("\n ROLL NO.  NAME             BIS   FC  MF");
	for(i=0;i<2;i++)
	{
		printf("%d",rollno);
		puts(name[i]);
		for(j=0;j<4;j++)
		{
			printf("%d",marks[i][j]);
			printf("%d",marks[i][j]);
			printf("%d",marks[i][j]);
			printf("%d",marks[i][j]);
		}
		printf("\n");

	}
	getch();
}
