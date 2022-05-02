#include<stdio.h>
#include<conio.h>
void swap();
void swap()
{
	int *p,*s,st,x,y;
       //	printf("%u ",&x);
	p=&x;
	s=&y;

	printf("Enter the value in x\n");
	scanf("%d",p);
	printf("Enter the value in y\n ");
	scanf("%d",s);
       //	printf("%u",&x);
	st=*p;
	*p=*s;
	*s=st;
	printf("\nvalue of x=%d",*p);
	printf("\nvalue of y=%d",*s);

}
void main()
{
	clrscr();
	swap();
	getch();
}