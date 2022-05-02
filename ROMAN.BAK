#include<conio.h>
#include<iostream.h>
class count
{
	int x,y,s,i,j;
	public:
	void roman1();
};
void count::roman1()
{
	x=2;
	y=2;
	i=0;
	j=1;
	p:
	gotoxy(x,y);
	s=i+j;
	cout<<s;
	x=x+2;
	j++;
	if(j>10)
	{
		y=y+2;
		x=x+4;
		i=s;
		j=1;
	}
	if(i<100)
	goto p;
}
void main()
{
	clrscr();
	count s;
	s.roman1();
	getch();
}