#include<conio.h>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>

void main()
{
	float a,b,c,Ea=0,Er=0,Ep=0;
	clrscr();
	printf("Enter the value");
	scanf("%f",&a);
	printf("Enter the value of round off\n");
	scanf("%f",&b);
	Ea=fabs(a-b);
	Er=Ea/a;
	Ep=Er*100;
	printf("\nabsulete error=%f",Ea);
	printf("\nrelative error=%f",Er);
	printf("\npresentage error=%f",Ep);
	getch();

}