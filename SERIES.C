#include<conio.h>
#include<stdio.h>
void main()
{
	float x,i=1,fact=1,sum=0;
	clrscr();
	printf("Enter the no.\n");
	scanf("%f",&x);
	while(i<=x)
	{
		fact=fact*i;
		i++;
		sum=sum+(1/fact);

	}
	printf("%f",sum);
	getch();

}