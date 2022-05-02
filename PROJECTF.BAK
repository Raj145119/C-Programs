#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<fstream.h>
#include<process.h>
#include<string.h>
#include<process.h>
class file
{
	public:
	ifstream sta;
	char *ch;
	ofstream str;
	void password();
	void welcome();
	void createacc();
	void written();
};
void file::password()
{
	//ifstram sta;
	int x=16,ch=0,op;
	char *p=" ",*p1=" ";
	sta.open("password.xls",ios::in);
	cout<<"Enter password=";
	for(int i=0;i<5;i++)
	{
		gotoxy(x,1);
		p1[i]=getch();
		cout<<"*";
		x+=1;
	}
	while(!sta.eof())
	{
		sta>>p;
		if(strstr(p,p1)<0);
		{
			ch++;
			welcome();
		}
	}
	if(ch==0)
	{
		cout<<"password does not match\n";
		cout<<"Enter your chice\n";
		cout<<"press 1 for relogin\n";
		cout<<"press 2 for new user\n";
		cout<<"press 3 for exit\n";
		cin>>op;
		if(op==1)
		{
			password();

		}
		else if(op==2)
		{
			cout<<"newuser\n";
		}
		else
			exit(1);
	}

}
void file::welcome()
{
	int g;
	clrscr();
	gotoxy(40,5);
	textcolor(GREEN);
	cprintf("WELCOME\n");
	textcolor(5);
	gotoxy(10,7);
	cprintf("\nPress 1 for Want to be a create  an Account\n");
	gotoxy(10,9);
	cprintf("press 2 for open a file\n");
	gotoxy(10,11);
	cprintf("press 3 for exit\n");
	cin>>g;
	switch(g)
	{
		case 1:
			written();
		break;
		case 2:
			cout<<"welcome";
		break;
		case 3:
			exit(1);
	}
}
void file::written()
{
	char c;
	str.open ("aditya10.txt",ios::app);
	 do{
		createacc();
		cout<<"\nDo you want to enter more record y,n : ";
		c=getch();
	 }while(c=='y');

}
void file::createacc()
{

	int x,y;
	char m[20]=" ",n[15]=" ",*o="  ",*z=" ",*s=" ";
	clrscr();
	textcolor(GREEN);
	textbackground(BLUE);
	gotoxy(10,2);
	cprintf("ID  ");
	gotoxy(10,4);
	printf("Name ");
	gotoxy(10,6);
	printf("ADDRESS ");
	gotoxy(10,8);
	printf("DEPT NAME ");
	gotoxy(10,10);
	printf("DOB ");
	textbackground(RED);
	gotoxy(30,2);
	cprintf("       ");
	gotoxy(30,4);
	cprintf("                        ");
	gotoxy(30,6);
	cprintf("                         ");
	gotoxy(30,8);
	cprintf("                     ");
	gotoxy(30,10);
	cprintf("                  ");
	gotoxy(30,4);
	textbackground(WHITE);
	gotoxy(30,2);
	gets(s);
	str<<s<<"\t  ";
	gotoxy(30,4);
	gets(m);
	str<<m<<"   \t ";
	gotoxy(30,6);
	gets(n);
	str<<n<<"   \t  ";
	gotoxy(30,8);
	gets(o);
	str<<o<<"    \t  ";
	gotoxy(30,10);
	gets(z);
	str<<z<<"  ";
	return;
}
/*void file::createacc()
{

	int x,y;
	char m[20]=" ",n[15]=" ",*o="  ",*z=" ";
	clrscr();
	textcolor(BLUE);
	textbackground(WHITE);
	gotoxy(10,4);
	cprintf("Name ");
	gotoxy(30,4);
	cprintf("                        ");
	gotoxy(10,6);
	cprintf("ADDRESS ");
	gotoxy(30,6);
	cprintf("                         ");
	gotoxy(10,8);
	cprintf("DEPT NAME ");
	gotoxy(30,8);
	cprintf("                     ");
	gotoxy(10,10);
	cprintf("DOB ");
	gotoxy(30,10);
	//textcolor(RED);
	cprintf("                  ");
	gotoxy(30,4);
	gets(m);
	gotoxy(30,6);
	gets(n);
	gotoxy(30,8);
	gets(o);
	gotoxy(30,10);
	gets(z);
	clrscr();
	gotoxy(5,5);
	puts(m);
	gotoxy(5,7);
	puts(n);
	gotoxy(5,9);
	puts(o);
	gotoxy(5,11);
	puts(z);
	getch();

} */

void main()
{
	clrscr();
	file f;
	f.password();
	getch();
}