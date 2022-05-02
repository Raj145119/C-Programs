#include<stdio.h>
#include<conio.h>
void main()
{
	int n=1,no=2,no1=3,no2=4,no3=5,no4=6,table,table1,table2,table3,table4;
	clrscr();
       //	printf("enter the  value\n");
	///scanf("%d%d%d%d",&no,&no,&no,&no);
	p:
	table=no*n;
	table1=no1*n;
	table2=no2*n;
	table3=no3*n;
	table4=no4*n;
	printf("\n=%d\t%d\t%d\t%d\t%d",table,table1,table2,table3,table4);
	n++;
	if(n<=10)
	goto p;
	getch();
}