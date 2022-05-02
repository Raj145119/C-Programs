#include<stdio.h>
#include<conio.h>
int factor(int);
void main()
{
	int i,x;
	clrscr();
	printf("enter the number:");
	scanf("%d",&i);
	x=factor(i);
	printf("\n factorial of %d=%d",i,x);
	getch();
}
int factor(int n)
{
	if(n==0)
	return 1; //printf("fact is 1");
	else

	//for(n=1;n<=i;n++)
	return n*factor(n-1);


}