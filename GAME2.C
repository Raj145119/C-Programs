#include<stdio.h>
#include<conio.h>
int x,y,z;
void display();
void display1();
void display2();
void display3();
void display4();
void display5();
void calculate();
void display()
{
	printf("ADITYA\n");
	printf("ANAND\n");
	printf("UMESH\n");
	printf("JITESH\n");
	printf("PRAVEEN\n");
	printf("CHANDAN\n");
	printf("RAJU\n");
	printf("RAM\n");
	printf("UTTAM\n");
	printf("PRINCE\n");
	getch();
	display1();
}
void display1()
{
	clrscr();
	printf(" \t*** PAGE   1\n");
	printf("ADITYA\n");
	printf("PRAVEEN\n");
	printf("UMESH\n");
	printf("ANAND\n");
	getch();
	display2();
}
void display2()
{
	clrscr();
	printf(" \t*** PAGE   2\n");
	printf("UMESH\n");
	printf("JITESH\n");
	printf("PRINCE\n");
	printf("RAM\n");
	getch();
	display3();
}
void display3()
{
	clrscr();
	printf(" \t*** PAGE   3\n");
	printf("CHANDAN\n");
	printf("JITESH\n");
	printf("ADITYA\n");
	printf("UTTAM\n");
	getch();
	display4();
}
void display4()
{
	clrscr();
	printf(" \t*** PAGE   4\n");
	printf("RAJU\n");
	printf("CHANDAN\n");
	printf("RAM\n");
	printf("ANAND\n");
	getch();
	display5();
}
void display5()
{
	clrscr();
	printf(" \t*** PAGE   5\n");
	printf("PRAVEEN\n");
	printf("PRINCE\n");
	printf("UTTAM\n");
	printf("RAJU\n");
	getch();
	calculate();
}
void calculate()
{
	clrscr();
	printf("Enter the No. of Page  Which You 1st See Your Name\n");
	scanf("%d",&x);
	printf("Again Enter The No. of Page Which You 2nd See Your Name\n");
	scanf("%d",&y);
	z=x*y;
	switch(z)
	{
		case 3:
			printf("ADITYA");
		break;
		case 2:
			printf("UMESH");
		break;
		case 4:
			printf(" ANAND");
		break;
		case 5:
			printf("PRAVEEN ");
		break;
		case 6:
			printf("JITESH");
		break;
		case 10:
			printf("PRINCE");
		break;
		case 8:
			printf("RAM");
		break;
		case 12:
			printf("CHANDAN");
		break;
		case 15:
			printf("UTTAM");
		break;
		case 20:
			printf("RAJU");
		break;
		default :
		printf("WRONG CHOICE");

	}
}
void main()
{
	clrscr();
	display();
	getch();

}
