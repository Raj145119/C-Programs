#include<stdio.h>
#include<conio.h>
#include<math.h>
float a,t,r;
void readdata();
void simpleint();
void main()
{

	clrscr();
	readdata();
	simpleint();
	getch();
}
void readdata()
{
	printf("Enter the Amount\n");
	scanf("%f",&a);
	printf("Enter the Rate\n");
	scanf("%f",&r);
	printf("Enter the time\n");
	scanf("%f",&t);
}
void simpleint()
{
	float res;
	res=(a*pow((1+(r/100)),t));
	printf("C.I=%f",res);
}