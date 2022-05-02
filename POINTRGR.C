#include<stdio.h>
#include<conio.h>
void pointergr();
void pointergr()
{
	int  *p,*s,*t,x,y,z,*gr,*gr1;
	p=&x;
	s=&y;
	t=&z;
	printf("Enter the 1 value");
	scanf("%d",p);
	printf("Enter the 2 value");
	scanf("%d",s);
	printf("Enter the 3 value");
	scanf("%d",t);
	*gr=(*p>*s)?*p:*s;
	*gr1=(*gr>*t)?*gr:*t;
	printf("GREATERST VALUE=%d",*gr1);

}
void main()
{
	clrscr();
	pointergr();
	getch();
}