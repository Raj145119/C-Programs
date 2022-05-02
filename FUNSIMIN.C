#include<stdio.h>
#include<conio.h>
float simpleintrest(long int p,int r,float t)
{
	float si;
	si=(p*r*t)/100;
	return si;
}
void main()
{
	long int p;
	int r;
	float t,si;
	clrscr();
	printf("Enter the amount\n");
	scanf("%ld",&p);
	printf("Enter the rate\n");
	scanf("%d",&r);
	printf("Enter the time\n");
	scanf("%f",&t);
	si=simpleintrest(p,r,t);
	printf("%f",si);
	getch();

}