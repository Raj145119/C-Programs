#include<stdio.h>
//#include<stdin.h>
typedef union marks
{
int sports;
int dance;
int ncc;
};
typedef struct Student
{
char name[30];
int roll;
union marks m;
int a;
};
void getdata(struct Student s[],int n)
{
int i;
for(i=0;i<n;i++)
{
	printf("Enter the name of student %d ",i+1);
	//scanf("%s",s[i].name);
	fflush(stdin);
	gets(s[i].name);

	printf("Enter the roll no of student %d ",i+1);
	scanf("%d",&s[i].roll);
	printf("Enter 1 for sports, 2 for dance, 3 for ncc\nthe field of student %d ?",i+1);
	scanf("%d",&s[i].a);
	switch(s[i].a)
	{
	case 1:
	printf("Enter your sports marks");
	scanf("%d",&s[i].m.sports);
	//s[i].m.ncc=12;
	break;
	case 2:
	printf("Enter your dance marks");
	scanf("%d",&s[i].m.dance);
	break;
	case 3:
	printf("Enter your ncc marks");
	scanf("%d",&s[i].m.ncc);
	break;
	default:
	printf("INVALID CHOICE");
	}
}
}
void printdata(struct Student s[],int n)
{
int i;
for(i=0;i<n;i++)
{
	printf("the name of student %d is",i+1);
	//printf("%s\n",s[i].name);
puts(s[i].name);

	printf("the roll no of student %d is",i+1);
	printf("%d",s[i].roll);
	printf("a= ");
	printf("%d",s[i].a);
	switch(s[i].a)
	{
	case 1:
	printf("sports marks=");
	printf("%d\n",s[i].m.sports);
	//printf(" ncc marks=");
	//printf("%d\n",s[i].m.ncc);
	break;
	case 2:
	printf("dance marks=");
	printf("%d\n",s[i].m.dance);
	break;
	case 3:
	printf(" ncc marks=");
	printf("%d\n",s[i].m.ncc);
	break;
	default:
	printf("INVALID CHOICE");
	}
}
}
void main()
{
int n=3;
struct Student s[n];
getdata(s,n);
printf("\n\n");
printdata(s,n);
union marks mm;
//printf("size of =%d",sizeof(mm));

//mm.dance=10.2;
}

