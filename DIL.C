#include<conio.h>
#include<stdio.h>
void main()
{
	int i,j;
	clrscr();
	textcolor(BLINK+4);
	gotoxy(36, 11);
	cprintf("%c",3);
	gotoxy(37, 10);
	cprintf("%c",3);
	gotoxy(39, 9);
	cprintf("%c",3);
	gotoxy(39, 9);
	cprintf("%c",3);
	gotoxy(41, 9);
	cprintf("%c",3);
	gotoxy(42, 10);
	cprintf("%c",3);
	gotoxy(42, 11);
	cprintf("%c",3);
	textcolor(BLINK+7);
	gotoxy(42, 12);
	cprintf("%c",3);

	gotoxy(41, 13);
	cprintf("%c",3);
	gotoxy(40, 14);
	cprintf("%c",3);
	gotoxy(39, 15);
	textcolor(BLINK+2);
	cprintf("%c",3);
	gotoxy(38, 16);
	cprintf("%c",3);
       textcolor(BLINK+4);
	gotoxy(34, 10);
	cprintf("%c",3);
       //	textcolor(BLINK+4);
	gotoxy(32, 9);
	cprintf("%c",3);
	gotoxy(30, 9);
	cprintf("%c",3);
	gotoxy(29, 10);
	cprintf("%c",3);

	gotoxy(29, 11);
	cprintf("%c",3);
	textcolor(BLINK+7);
	gotoxy(29, 12);
	cprintf("%c",3);
	gotoxy(30, 13);
	cprintf("%c",3);
	gotoxy(31, 14);
	cprintf("%c",3);
	textcolor(BLINK+2);
	gotoxy(32, 15);
	cprintf("%c",3);
	gotoxy(33, 16);
	cprintf("%c",3);
	gotoxy(36, 17);
	cprintf("%c",3);
	gotoxy(30,15);
	cprintf("%c",47);
	textcolor(BLINK+14);
	gotoxy(32, 12);
	cprintf("I LOVE U");
	gotoxy(33,14);
	//cprintf(" RESHU");
	cprintf("------");

	textcolor(BLINK+RED);
	gotoxy(44,10);
	cprintf("%c",47);
	gotoxy(44,9);
	cprintf("%c",95);
	gotoxy(45,10);
	cprintf("|");
	gotoxy(60,15);

	getch();
}