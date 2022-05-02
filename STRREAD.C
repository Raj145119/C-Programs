/*return function using structure*/
#include<stdio.h>
#include<conio.h>
struct student
{
	int roll;
	char name[20];
	int fee;
};
void show(struct student);
struct student readdata(struct student);
void main()
{

	//clrscr();
	struct student s2,s3,s1={1,"praveen",500};
	clrscr();
	s2=readdata(s2);
	s3=s1;
	printf("1st information of student\n");
	show(s3);
	printf("\n2nd information of student\n");
	show(s2);
	getch();
}
struct student readdata(struct student s)
{
	printf("Enter the roll no.\n");
	scanf("%d",&s.roll);
	printf("Enter the name\n");
	scanf("%s",&s.name);
	printf("Enter the fee\n");
	scanf("%d",&s.fee);
	return s;
}
void show(struct student s3)
{
	printf("\tRoll no.=%d",s3.roll);
	printf("\tName=%s",s3.name);
	printf("\tFee=%d",s3.fee);
}