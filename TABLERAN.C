#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2,i=1,table;
	clrscr();
	printf("Enter the table range\n");
	scanf("%d %d",&n1,&n2);
	A:
	table=n1;
	B:
	printf("%d\t",table*i);
	table++;
	if(table<=n2)
	    goto B;
	i++;
	printf("\n");
	if(i<=10)
	  goto A;
	getch();
}
