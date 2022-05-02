#include<stdio.h>
#include<conio.h>
#include<string.h>
void display();
char m[20]=" ",n[15]=" ",*o="  ";
long z;
void main()
{
	int x,y;

	clrscr();
	textcolor(BLUE);
	textbackground(WHITE);
	gotoxy(10,4);
	printf("Name ");
	gotoxy(30,4);
	cprintf("                        ");

	gotoxy(10,6);
	printf("ADDRESS ");
	gotoxy(30,6);
	cprintf("                         ");

	gotoxy(10,8);
	printf("DEPT NAME ");
	gotoxy(30,8);
	cprintf("                     ");

	gotoxy(10,10);
	printf("DOB ");
	gotoxy(30,10);
	cprintf("                  ");


	gotoxy(30,4);
	gets(m);
	//getch();
	gotoxy(30,6);
	gets(n);
	//getch();
	gotoxy(30,8);
	gets(o);
	//getch();
	gotoxy(30,10);
	scanf("%ld",&z);
      //	getch();
	display();
	getch();

}
void display()
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

}