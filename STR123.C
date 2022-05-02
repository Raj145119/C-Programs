#include<stdio.h>
#include<conio.h>
#include<string.h>
void read();
void output();
int n;
struct student
{
	int roll;
	char name[20];
	char add[50];
	int fee;
}s1[5];
void main()
{
     //int i;
     clrscr();
     /*
     printf("Enter the student detail\n");
     puts("Enter the roll no.\n");
     scanf("%d",&s1.roll);
     puts("Enter the name\n");
     gets(s1.name);
     //scanf("%s",&s1.name);
     puts("Enter the fee\n");
     scanf("%f",&s1.fee);
     printf("%d\n",s1.roll);
     puts(s1.name);
     printf("%f",s1.fee); */
     read();
     output();
     getch();
}
void read()
{
	int i;
	printf("how many record are input\n");
	scanf("%d",&n);
     for(i=0;i<n;i++)
     {
     printf("Enter the student detail\n");
     printf("Enter the roll no.\n");
     scanf("%d",&s1[i].roll);
     printf("Enter the name\n");
     //gets(s1[i].name);
     scanf("%s",&s1[i].name);
    printf("Enter the address\n");
     //gets(s1[i].add);
       scanf("%s",&s1[i].add);
     printf("Enter the fee\n");
     scanf("%d",&s1[i].fee);
     }
}
void output()
{
	int i;
     for(i=0;i<n;i++)
     {
     printf("\nThe %d Record of student\n",i+1);
     printf("Roll no: %d\t",s1[i].roll);
     printf("Name: %s\t",s1[i].name);
     printf("Add: %s\t",s1[i].add);
     printf("Fee: %d",s1[i].fee);
     }

}

