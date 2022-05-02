	/*difference between hour and minutes*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int m,h,m1,m2,m3,m4,d;
	clrscr();
	printf("Enter the hour\n");
	scanf("%d",&h);
	printf("Enter the minutes\n");
	scanf("%d",&m);
	if(h==12)
	m1=0;
	else
	m1=h*5;
	m2=m1>m?m1:m;
	m3=m1<m?m1:m;
	m4=m2-m3;
	d=6*m4;
	if(d>180)
	printf("diff. between hour and minutes=%d (degree)",(360-d));
	else
	printf("diff. between hour and minutes=%d (degree)",d);
	getch();
}