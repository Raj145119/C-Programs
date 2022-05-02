#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<process.h>
#include<fstream.h>
class string
{
	public:
	char *ch;
	ofstream str;
	void display();
	void written();
};
void string::written()
{
	char c;
	str.open ("aditya10.txt",ios::app);
	 do{
		display();
		cout<<"\nDo you want to enter more record y,n : ";

		c=getch();
	 }while(c=='y');

}
void string::display()
{

	int x,y;
	char m[20]=" ",n[15]=" ",*o="  ",*z=" ",*s=" ";
	clrscr();
	textcolor(BLUE);
	textbackground(GREEN);
	gotoxy(10,2);
	cprintf("ID  ");
	gotoxy(10,4);
	cprintf("Name  ");
	gotoxy(10,6);
	cprintf("ADDRESS ");
	gotoxy(10,8);
	cprintf("DEPT NAME ");
	gotoxy(10,10);
	cprintf("DOB    ");
	textbackground(WHITE);
	gotoxy(30,2);
	cprintf("      ");
	gotoxy(30,4);
	cprintf("                        ");
	gotoxy(30,6);
	cprintf("                         ");
	gotoxy(30,8);
	cprintf("                     ");
	gotoxy(30,10);
	cprintf("                  ");
	textbackground(BLUE);
	cprintf(" ");
	str<<"\n";
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
	str<<z<<"   ";
	return;
}
      /*	getch();
	//show();
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
/*void string::show()
{
	clrscr();
	gotoxy(5,5);
	puts(m);
	gotoxy(5,7);
	puts(n);
	gotoxy(5,9);
	puts(o);
	gotoxy(5,11);
	printf("%ld",z);

}  */
void main()
{
	string s;
	s.written();
}