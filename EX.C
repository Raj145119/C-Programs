#include<stdio.h>
#include<conio.h>
#include"functios.c"
void show()
{
      //	clrscr();
	printf("%d\n",x);
}
void main()
{
	clrscr();
       //	praveen();
	printf("again calling\n");
	show();
       //	praveen();
       show();

	printf("X= %d",x);
	getch();

}

