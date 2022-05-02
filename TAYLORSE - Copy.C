#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x,float y)
{
	return (x*x+y*y);

}
float f1(float x,float y)
{
	return(2*x+2*y+f(x,y));

}
float f2(float x,float y)
{
	return(2+2*f(x,y)*f(x,y)+2*y*f1(x,y));

}
float f3(float x,float y)
{
	return(4*f1(x,y)+2*f(x,y)*f2(x,y)+2*y*f2(x,y));

}
void main()
{
	float x0=0,y0=1,h=0.25,x1=0.25,x2=0.5,y1=0,y2=0,x3=0;
	clrscr();
	//printf("%f",f);
	//printf("%f",f1);
	//printf("%f",f2);
	//printf("%f",f3);

	y1=y0+h*f(x0,y0)+((h*h)/2)*f1(x0,y0)+((h*h*h)/6)*f2(x0,y0);/*+((h*h*h*h)/24)*f3(x0,y0);*/
	printf("%f",y1);
	x3=x2-x1;
	y2=y1+h*f(x3,y1)+((h*h)/2)*f1(x3,y1)+((h*h*h)/6)*f2(x3,y1);/*+((h*h*h*h)/24)*f3(x3,y1); */
	printf("%f",y2);

	getch();
}