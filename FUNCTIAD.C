#include<stdio.h>
#include<conio.h>
//int sum(int,int);
int sum(int x,int y)
{
	int z;
	z=x+y;
	return z;

}
void main()
{
	int x1,y1,z1;
	clrscr();
	printf("Enter the 2 number\n");
	scanf("%d%d",&x1,&y1);
	z1=sum(x1,y1);
	printf("sum of %d & %d=%d",x1,y1,z1);
	getch();
}