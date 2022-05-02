#include<conio.h>
#include<iostream.h>
class M
{
	int i,j,k,m,d2,y;
	public:
       //	void month();
	void date();
};
/*void M::month()
{
	cout<<"january "<<"february "<<"march "<<"april " <<"may "<<"june "<<"july "
	<<"August "<<"september "<<"october " <<"november "<<"december";
} */
void M::date()
{
	k=1;
	cout<<"Enter the year\n";
	cin>>y;
	cout<<"Enter the month\n";
	cin>>m;
	switch(m)
	{
		case 1:
			cout<<"\t JANUARY "<<y<<"\n";
			d2=31;
		break;
		case 2:
			cout<<"\t FEBRUARY "<<y<<"\n";
			if(y%4==0)
				d2=29;
			else
				d2=28;
		break;
		case 3:
			cout<<"\t MARCh "<<y<<"\n";
			d2=31;
		break;
		case 4:
			cout<<"\t APRIL "<<y<<"\n";
			d2=30;
		break;
		case 5:
			cout<<"\t MAY "<<y<<"\n";
			d2=31;
		break;
		case 6:
			cout<<"\t JUNE "<<y<<"\n";
			d2=30;
		break;
		case 7:
			cout<<"\t JULY "<<y<<"\n";
			d2=31;
		break;
		case 8:
			cout<<"\t AUGUST "<<y<<"\n";
			d2=31;
		break;
		case 9:
			cout<<"\t SEPTEMBER "<<y<<"\n";
			d2=30;
		break;
		case 10:
			cout<<"\t OCTOBER "<<y<<"\n";
			d2=31;
		break;
		case 11:
			cout<<"\t NOVEMBER "<<y<<"\n";
			d2=30;
		break;
		case 12:
			cout<<"\t DECEMBER "<<y<<"\n";
			d2=31;
		break;
	}
	cout<<"Sun "<<"Mon "<<"Tue "<<"Wed " <<"Thu "<<"fri "<<"Sat "<<endl;

	for(i=0;i<5;i++)
	{
		for(j=0;j<7;j++)
		{
			if(k<=d2)
			cout<<k;
			if(k<=9)
			cout<<"   ";
			if(k>9)
			cout<<"  ";
			k++;
		}
		cout<<"\n";
	}
}
void main()
{
	M m;
	clrscr();
	//m.month();
	m.date();
	getch();
}