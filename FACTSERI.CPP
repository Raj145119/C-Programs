#include<iostream.h>
#include<conio.h>
void main()
{
	int i,n;
	float fact=1,sum=0,x;
	clrscr();
	cout<<"1/1!+2/2!+...+n/n! \n";
	cout<<"Enter the last no\n";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
		x=i/fact;
		sum=sum+x;
	}
	cout<<"sum = " <<sum;
	getch();
}