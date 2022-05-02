#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	float x,x1,x2,e,y,y1,y0,y2;
	int i=0;


	printf("Enter the 1st value");
	scanf("%f",&x);

	printf("Enter the 2nd value");
	scanf("%f",&x1);
	while(1)
	{
		y=x*x-25;
		y0=y;
		y=x1*x1-25;
		y1=y;
		e=(x1-x)/x1;
		if((y0<0&&y1<0)||(y0>0&&y1>0))
		{
			break;
		}
		while(((x1-x)/x1)<e)
		{
			x1=x+x1/2;
			y2=x2*x2-25;
			i=i+1;

		}
		if((y<0&&y2<0)||(y>0&&y2>0))
		{
			x=x2;
		}
		else
			x1=x2;

	}
	printf("no of iretation%d", i);
	getch();

}
