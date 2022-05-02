#include<stdio.h>
#include<conio.h>
struct add1
{
	int x,y;
};
struct  add2
{
	int x1,y1;

};
struct add3
{
	int x2,y2;
};
void main()
{
	int sum;
	struct add1 s;struct add2 s1;struct add3 s2;
	clrscr();
	printf("Enter the 2 value\n");
	scanf("%d %d",&s.x,&s.y);

	printf("\nEnter the value \n");
	scanf("%d %d",&s1.x1,&s1.y1);

	printf("Enter the 2 value\n");
	scanf("%d%d",&s2.x2,&s2.y2);
	sum=s.x+s.y+s1.x1+s1.y1+s2.x2+s2.y2;
	printf("%d",sum);
	getch();

}

