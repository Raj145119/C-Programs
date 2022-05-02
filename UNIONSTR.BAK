#include<stdio.h>
#include<conio.h>
union marks
{
	int it;
	int c;
	int math;

//struct stu s1;
};
struct stu
{
	int roll;
	char name[10];
	int marks;
	union marks s1,s3,s4;
	union sport
	{
		int match;
		int foot;
	}s;
};

void main()
{
	struct stu s2;
	//union sport s;
	int a;
	clrscr();
	//union marks1 m1;
	printf("\nEnter the roll no\n");
	scanf("%d",&s2.roll);
	printf("Enter the name\n");
	scanf("%s",s2.name);
	printf("Enter the marks\n");
	printf("IT marks:");
	scanf("%d",&s2.s1.it);
	printf("c marks:");
	scanf("%d",&s2.s3.c);
	printf("Math marks:");
	scanf("%d",&s2.s4.math);
	printf("Enter the sport\n");
	printf("Enter the 1 for match\n");
	printf("Enter the 2 for football\n");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
		scanf("%d",&s2.s.match);
		break;
		case 2:
		scanf("%d",&s2.s.foot);
		break;
		default:
		printf("Wrong choice\n");
	}
	printf("Roll_No.\tName\tmarks\t\t\t sport\n");

	printf("%d\t\t%s\t%d\t%d\t%d",s2.roll,s2.name,s2.s1.it,s2.s3.c,s2.s4.math);
	if(a==1)
	printf("\t%d",s2.s.match);
	else
	printf("\t%d",s2.s.foot);
	getch();


}
