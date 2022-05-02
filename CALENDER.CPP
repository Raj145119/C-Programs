#include<conio.h>
#include<iostream.h>
#include<process.h>
class calender
{
	int d,m,y,i,n,k,j,a,da;
	int y1,d1,y2,d2,mm,d3,m3;
	public:
	void month();
	void day();
	void cal();
	void getdate();
	void date();
	void initialday();
};
void calender::getdate()
{
	cout<<"Enter the Date\n";
	cin>>d;
	cout<<"Enter the  Month\n";
	cin>>m;
	m3=m;
	cout<<"Enter the Year\n";
	cin>>y;
	mm=m;
	/*if(d>31|| m>12)
	{
		cout<<"\n INVALID INPUT";
		exit(0);
	} */
	month();
}
void calender::date()
{
	k=1;
	switch(mm)
	{
		case 1:
			cout<<"\t JANUARY "<<y<<"\n";
			d3=31;
		break;
		case 2:
			cout<<"\t FEBRUARY "<<y<<"\n";
			if(y%4==0)
				d3=29;
			else
				d3=28;
		break;
		case 3:
			cout<<"\t MARCh "<<y<<"\n";
			d3=31;
		break;
		case 4:
			cout<<"\t APRIL "<<y<<"\n";
			d3=30;
		break;
		case 5:
			cout<<"\t MAY "<<y<<"\n";
			d3=31;
		break;
		case 6:
			cout<<"\t JUNE "<<y<<"\n";
			d3=30;
		break;
		case 7:
			cout<<"\t JULY "<<y<<"\n";
			d3=31;
		break;
		case 8:
			cout<<"\t AUGUST "<<y<<"\n";
			d3=31;
		break;
		case 9:
			cout<<"\t SEPTEMBER "<<y<<"\n";
			d3=30;
		break;
		case 10:
			cout<<"\t OCTOBER "<<y<<"\n";
			d3=31;
		break;
		case 11:
			cout<<"\t NOVEMBER "<<y<<"\n";
			d3=30;
		break;
		case 12:
			cout<<"\t DECEMBER "<<y<<"\n";
			d3=31;
		break;
	}
	cout<<"Sun  "<<"Mon  "<<"Tue  "<<"Wed  " <<"Thu  "<<"fri  "<<"Sat  "<<endl;

	for(a=1;a<da;a++)
		cout<<"     ";
	for(j=da-1;j<7;j++)
	{
		cout<<k;
		cout<<"    ";
		k++;
	}
	cout<<"\n";
	for(i=0;i<5;i++)
	{
		for(j=0;j<7;j++)
		{
			if(k<=d3)
			cout<<k;
			if(k<=9)
			cout<<"    ";
			if(k>9)
			cout<<"   ";
			k++;
		}
		cout<<"\n";
	}
}
void calender::cal()
{
    /*	y1=y%100;
	y2=y1/4;
	d2=y2+y1+m+d;
	d1=d2%7;
	*/
	y1=y-1700;
	y1=y1/4;
	y1=y1+y-1700;
	y1=y1+m+d;
	d1=y1%7;
	if(y%4==0 && y!=1800 && y!=1700 && y!=1900 && y!=2200 && y!=2300)
	{
		if(m3==1)
		d1=d1+1;
		if(m3==2)
		d1=d1+1;

	}
	  else if(y%4==0 && y==1800 && y==1700 && y==1900 && y==2200 && y==2300)
	  {
		if(m3==1)
		d1=d1-3;
		if(m3==2)
		d1=d1-1;
	  }


	day();

}
void calender::initialday()
{
	d=1;
	y1=y-1700;
	y1=y1/4;
	y1=y1+y-1700;
	y1=y1+m+d;
	d1=y1%7;
	if(y%4==0 && y!=1800 && y!=1700 && y!=1900 && y!=2200 && y!=2300)
	{
		if(m3==1)
		d1=d1+1;
		if(m3==2)
		d1=d1+1;

	}
	  else if(y%4==0 && y==1800 && y==1700 && y==1900 && y==2200 && y==2300)
	  {
		if(m3==1)
		d1=d1-3;
		if(m3==2)
		d1=d1-1;
	  }


	//day();
	switch(d1)
	{
		case 5:
			//cout<<"\nSATURDAY\n";
			da=7;
		break;
		case 6:
		       //	cout<<"\nSUNDAY\n";
			da=1;
		break;
		case 0:
		case 7:
		       //	cout<<"\nMONDAY\n";
			da=2;
		break;
		case 1:
			//cout<<"\nTUESDAY\n";
			da=3;
		break;
		case 2:
			//cout<<"\nWEDNESDAY\n";
			da=4;
		break;
		case 3:
			//cout<<"\nTHURSDAY\n";
			da=5;
		break;
		case 4:
			//cout<<"\nFRIDAY\n";
			da=6;
		break;

	}
	date();



}
void calender::month()
{
	switch(m)
	{
		case 1:
			if(y%4==0 && y!=1800 && y!=1700 && y!=1900 && y!=2200 && y!=2300)
				m=6;
			else
				m=1;
			cal();
		break;
		case 2:
			if(y%4==0 && y!=1800 && y!=1700 && y!=1900 && y!=2200 && y!=2300)
				m=2;
			else
				m=4;
				cal();
		break;
		case 3:
		case 11:
			m=4;
			cal();
		break;
		case 7:
		case 4:
			m=0;
			cal();
		break;
		case 5:
			m=2;
			cal();
		break;
		case 6:
			m=5;
			cal();
		break;
		case 8:
			m=3;
			cal();
		break;
		case 9:
		case 12:
			m=6;
			cal();
		break;
		case 10:
			m=1;
			cal();
		break;
		default:
			cout<<"ENVALID MONTH\n";
	}
}
void calender::day()
{
	switch(d1)
	{
		case 5:
			cout<<"\nSATURDAY\n";
		break;
		case 6:
			cout<<"\nSUNDAY\n";
		break;
		case 0:
		case 7:
			cout<<"\nMONDAY\n";
		break;
		case 1:
			cout<<"\nTUESDAY\n";
		break;
		case 2:
			cout<<"\nWEDNESDAY\n";
		break;
		case 3:
			cout<<"\nTHURSDAY\n";
		break;
		case 4:
			cout<<"\nFRIDAY\n";
		break;

	}
	//date();
	initialday();

}
void main()
{
	calender c;
	clrscr();
	c.getdate();
	getch();
}