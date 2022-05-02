#include<stdio.h>
#include<conio.h>
void recursive(int);
void main()
{
	clrscr();
	recursive(10);
	getch();

}
void recursive(int i)
{
	printf("praveen\n");
	i--;
	if(i>=1)
	recursive(i);
}