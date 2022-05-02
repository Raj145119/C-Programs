#include<stdio.h>
#include<conio.h>
#include<string.h>
void mainmenu();
void login();
void create();
void authanticuser();
void wrong();
void mainmenu()
{
	int x=1,y=1,a;
	clrscr();
	textcolor(BLUE);
	p:
	gotoxy(x,y);
	cprintf("*");
	y++;
	if(y<=25)
	{
		goto p;
	}
	r:
	cprintf("* ");
	gotoxy(x,y);
	x++;
	if(x<=40)
	{
		goto r;
	}
	s:
	x=79;
	gotoxy(x,y);
	cprintf("* ");
	y--;
	if(y>=1)
	{
		goto s;
	}
	t:
	gotoxy(x,y);
	cprintf("* ");
	x--;
	if(x>=40)
	{
		goto t;
	}
	gotoxy(15,8);
	printf("MAIN MENU\n");
	printf("\tPress 1 for LOGIN\n");
	printf("\tPress 2 for CREATE ACCOUNT");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			login();
			break;
		case 2:
			create();
			break;
		default:
			cprintf("wrong choice");
	}

}
void login()
{
	int x=1,y=1,i;
	char *pwrd="abc",*upass;

	clrscr();
	textcolor(GREEN);
	p:
	gotoxy(x,y);
	cprintf("#");
	y++;
	if(y<=25)
	{
		goto p;
	}
	r:
	cprintf("# ");
	gotoxy(x,y);
	x++;
	if(x<=40)
	{
		goto r;
	}
	s:
	x=79;
	gotoxy(x,y);
	cprintf("# ");
	y--;
	if(y>=1)
	{
		goto s;
	}
	t:
	gotoxy(x,y);
	cprintf("# ");
	x--;
	if(x>=40)
	{
		goto t;
	}
	gotoxy(35,12);
	textcolor(RED);
	cprintf("WEL COME");
	gotoxy(36,14);
	printf("Enter user name\n");
	gotoxy(36,16);

		printf("Enter the password\n");
		scanf("%s",&upass);
		i=stricmp(pwrd,upass);
		if(i>=1)
		{
			authanticuser();
		}
		else
		{
			wrong();
		}

}
void create()
{
	int x=1,y=1,i;
	clrscr();
	textcolor(YELLOW);
	p:
	gotoxy(x,y);
	cprintf("*");
	y++;
	if(y<=25)
	{
		goto p;
	}
	r:
	cprintf("* ");
	gotoxy(x,y);
	x++;
	if(x<=40)
	{
		goto r;
	}
	s:
	x=79;
	gotoxy(x,y);
	cprintf("* ");
	y--;
	if(y>=1)
	{
		goto s;
	}
	t:
	gotoxy(x,y);
	cprintf("* ");
	x--;
	if(x>=40)
	{
		goto t;
	}
	gotoxy(35,12);
	textcolor(RED);
	cprintf("WEL COME");
	gotoxy(36,14);
	printf("TO CREATE ACCOUNT\n");
	gotoxy(36,16);
	printf("Enter new name\n");
	gotoxy(36,18);
	printf("Enter password");
}
void authanticuser()
{
	int x=1,y=1,i;
	clrscr();
	textcolor(YELLOW);
	p:
	gotoxy(x,y);
	cprintf("*");
	y++;
	if(y<=25)
	{
		goto p;
	}
	r:
	cprintf("* ");
	gotoxy(x,y);
	x++;
	if(x<=40)
	{
		goto r;
	}
	s:
	x=79;
	gotoxy(x,y);
	cprintf("* ");
	y--;
	if(y>=1)
	{
		goto s;
	}
	t:
	gotoxy(x,y);
	cprintf("* ");
	x--;
	if(x>=40)
	{
		goto t;
	}
	gotoxy(35,12);
	textcolor(RED);
	cprintf("WEL COME");
	gotoxy(35,14);
	textcolor(WHITE);
	cprintf("C P U");
}
void wrong()
{
	int x=1,y=1,i;
	clrscr();
	textcolor(YELLOW);
	p:
	gotoxy(x,y);
	cprintf("*");
	y++;
	if(y<=25)
	{
		goto p;
	}
	r:
	cprintf("* ");
	gotoxy(x,y);
	x++;
	if(x<=40)
	{
		goto r;
	}
	s:
	x=79;
	gotoxy(x,y);
	cprintf("* ");
	y--;
	if(y>=1)
	{
		goto s;
	}
	t:
	gotoxy(x,y);
	cprintf("* ");
	x--;
	if(x>=40)
	{
		goto t;
	}
	gotoxy(35,12);
	textcolor(RED);
	cprintf("WRONG PASSWORD");
}
void main()
{
	clrscr();
	mainmenu();
	getch();
}