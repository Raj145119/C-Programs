#include<stdio.h>
#include<Conio.h>
int praven();
//void main()
int praveen()
{
	int x,y,z,gr;
	printf("\n enter the 3 number");
	scanf("%d%d%d",&x,&y,&z);
	gr=(x>y)?(x>z)?x:z:(y>z)?y:z;
       //	printf("your enter %d",gr);
	return gr;
}
void main()
{
	int x;
	clrscr();
	x=praveen();
	printf("the greatest no is %d\n",x);
	getch();

}
