#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
	int x=100,y,z;
	clrscr();
	p:
	if(x>1)
	printf("praveen\n");
	delay(300);
	x++;
	if(kbhit()==0)
	goto p;
	getch();


}