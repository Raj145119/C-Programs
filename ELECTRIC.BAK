#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<process.h>
void main()
{
	float unit,res,rs,u,u1,u2;
	clrscr();
	printf("Enter the Unit\n");
	scanf("%f",&unit);
	if(unit<100)
	{
		printf("No charge \n");
	       //	exit(1);
	}
	else if(unit>=100 && unit<200)
	{
		u=unit-100;
		rs=u*(0.60);
		printf("unit charge=%.2f",rs);
	     //	exit(1);
	}
	else if(unit>=200 && unit<300)
	{
		u=unit-200;
		rs=u*(0.80);
		u1=100*(0.60);
		res=u1+rs;
		printf("unit charge=%.2f",res);
	       //	exit(1);
	}
	else if(unit>=300)
	{
		u=unit-300;
		rs=u*1;
		u1=100*(0.80);
		u2=100*(0.60);
		res=rs+u1+u2;
		printf("unit charge=%f",res);
	       //	exit(1);
	}
	else
	{
	}
	 getch();
}