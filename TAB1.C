#include<stdio.h>
#include<conio.h>
void main()
{
	int i,x;
	char c;
	clrscr();
	do
	{
	i=1;
	printf("Enter the no. for Table\n");
	scanf("%d",&x);
	while(i<=10)
	{
		printf(" %d *  %d  =  %d\n",x,i,x*i);
		i++;
	}
	printf("\nPrint the Another Table(y/n):");
	fflush(stdin);
	}while(getchar()!='n');
	getch();

}
