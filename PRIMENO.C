#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,j=0,n,a;
	clrscr();
	printf("enter the vlue\n");
	scanf("%d",&n);
	//a=n;
	while(n>=i)
	{
		if(n%i==0)
		{
		   j++;
		   i++;
		}
		else
		i++;
	}
	if(j==2)
	  printf("PRIME NUMBER");
	else
	  printf("NOT PRIME NUMBER");
	getch();
}