#include <stdio.h>
#include <conio.h>
#include<iostream.h>
#include<string.h>
char n[10]=" ",p[5]=" ";
void screen();
void login();
void user();
void input()
{
	ofstream str;
	char c;
	str.open ("aditya15.txt",ios::app);
	 do{
		user();
		cout<<"\nDo you want to enter more record y,n : ";

		c=getch();
	 }while(c=='y');

}
void screen()
{
	int x=2,y=2;
	clrscr();
	textcolor(RED);
	p:
	gotoxy(x,y);
	cprintf("*");
	if(x<=78)
	{
	x++;
	goto p;
	}
	else if(y<=24)
	{
	y++;
	goto p;
	}
	x=2;
	y=3;
	A:
	gotoxy(x,y);
	cprintf("*");
	if(y<=24)
	{
		y++;
		goto A;
	}
	else if(x<=77)
	{
		x++;
		goto A;
	}
}
void login()
{
	int i;
	char ch[4],ch2[4]={1,2,3,4};
	textcolor(GREEN);
	gotoxy(25,14);
	cprintf("User Name");
	textcolor(YELLOW);
	gotoxy(35,14);
	gets(n);
	textcolor(GREEN);
	gotoxy(25,17);
	cprintf("Login");
	for (i=0;i<4;i++)
	{
		ch[i] = getch();
		printf("*");
	}
	if(stricmp(ch== ch2))
	{
		user();
	       //	printf("VAlid Password");
	}

}
void user()
{
	screen();
	textcolor(BLUE);
	gotoxy(28,4);
	cprintf("WELCOME IN NEW FORM\n");
	textcolor(YELLOW);
	gotoxy(25,10);
	cprintf("ID ");
	gotoxy(35,10);
	gets(id);
	str(id);
	gotoxy(25,11);
	cprintf("MAME ");
	gotoxy(35,11);
	gets(n1);
	str(n1);
	gotoxy(25,12);
	cprintf("ADDRESS");
	gets(adds);
	str(adds);
	gotoxy(25,13);
	cprintf("Mo.No.");
	gets(mo);
	str(mo);

}

void main()
{
screen();
login();
getch();
}
