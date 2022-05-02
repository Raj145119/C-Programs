#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,z;
	clrscr();
	printf("\n\t\t\t*****Truth Table******\n\n");
	printf("x \ty\tOR\tAND\tX-OR\tX-NOR\tNOR\tNAND\n");
	x=0;y=0;
	printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n",x,y,x||y,x&&y,x^y,-~(x^y),(-~(x||y)),(-~(x&&y)));
	x=0;y=1;
	printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n",x,y,x||y,x&&y,x^y,(~(x^y)+2),(~(x||y)+2),(-~(x&&y)));
	x=1;y=0;
	printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n",x,y,x||y,x&&y,x^y,(~(x^y)+2),(~(x||y)+2),(-~(x&&y)));
	x=1;y=1;
	printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n",x,y,x||y,x&&y,x^y,-(~(x^y)),(~(x||y)+2),(~(x&&y))+2);
	getch();

}