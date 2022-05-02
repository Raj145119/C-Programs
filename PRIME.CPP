#include<iostream.h>
#include<conio.h>
void main()
{
	int x,y=1,z=0;
	clrscr();
	cout<<"Enter the number\n";
	cin>>x;
	while(x!=0)
	{
		if(x%y)
		{
			y++;
			z++;
		}
		else
			y++;

	}
	if(z==2)
		cout<<x<<"is prime";
	else
		cout<<x<<"is not prime";
	getch();
}