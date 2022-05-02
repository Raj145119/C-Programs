#include<stdio.h>
#include<dos.h>
#include<conio.h>
void time();
//struct dostime_t t;
struct  time t;
void main()
{
   clrscr();
   time();
   getch();
}
void time()
{      /*  do{
	_dos_gettime(&t);
	gotoxy(32,10);
	printf(" %d:",t.hour);
	printf(" %d:",t.minute);
	printf(" %d",t.second);
	//delay(1000);
	}while(!kbhit());  */
	do{
	gettime(&t);
	gotoxy(32,10);
	textcolor(RED);
	cprintf(" %d", t.ti_min);
	cprintf(":%d", t.ti_hour);
	cprintf(":%d", t.ti_sec);
	textcolor(BLACK);
	cprintf(" %d", t.ti_hund);
	}while(!kbhit());

}
