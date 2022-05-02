#include<stdio.h>
#include<conio.h>
#include<string.h>
char n[10]=" ",p[5]=" ";
//void screen();
void user();
void screen()
{
	int x=2,y=2;
	clrscr();
	textcolor(RED);
	p:
	gotoxy(x,y);
	cprintf("*");
       //	y++;
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

       //	getch();
}
void login()
{
	char ch[3],ch2[3]={1,2,3};
	int i,x=35;
	//int i,p1[3],x=35,a[3]={1,2,3};
	textcolor(GREEN);
	gotoxy(25,14);
	cprintf("User Name");
	textcolor(YELLOW);
	gotoxy(35,14);
	gets(n);
	textcolor(GREEN);
	gotoxy(25,17);
	cprintf("Login");
	gotoxy(35,17);
	textcolor(YELLOW);
	for(i=0;i<3;i++)
	{
		gotoxy(x,17);
		ch[i]=getch();
		printf("*");
		x+=1;
	}

	// user();

	if(strcmpi(ch2,ch)==0)
	{
	      //	printf("Invalid");
	      user();
	}
	ch[i] = '\0';
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

	gotoxy(25,11);
	cprintf("MAME ");

	gotoxy(25,12);
	cprintf("ADDRESS");

	gotoxy(25,13);
	cprintf("Mo.No.");

}

void main()
{
	screen();

	login();
	getch();
}