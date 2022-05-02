#include<stdio.h>
#include<conio.h>
void main()
{
	int x=5,y=3,z,z1,z2,z3,z4;
	clrscr();
	z=x++,++x;
	z1=(x++),(++x);
	z2=(x++,++x,x++);
	z3=++y,x+=y;
	z4=((x+++y++),(x+y));
	printf("z=%d,\nz1=%d\nz2=%d,\nz3=%d,\nz4=%d",z,z1,z2,z3,z4);
	getch();
}