#include<iostream.h>
#include<conio.h>
void main()
{
	int i,j,k;
	clrscr();
	for(i=1;i<=5;i++)
	{
		for(j=5;j>=i;j--)
		{
			cout<<" ";
		}
		for(k=1;k<=i;k++)
			cout<<" *";
		cout<<endl;
	}
	getch();

}