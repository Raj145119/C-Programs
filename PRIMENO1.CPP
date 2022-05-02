#include<iostream.h>
#include<conio.h>
void main()
{
	int x,y=0,i;
	clrscr();
	for(i=1;i<=200;i++)
	{
		x=1;
		y=0;
		while(i>=x)
		{
			if(i%x==0)
			{
				y++;
				x++;
			}
			else
				x++;
		}
		if(y==2)
		cout<<i<<"\t" ;
	}
	getch();
}