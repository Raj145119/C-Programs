#include<stdio.h>
#include<conio.h>
void main()
{
	float amount=0;
	int rs;
	char ch;
	clrscr();
	printf("Enter the Amount\n");
	scanf("%d",&rs);
	fflush(stdin);
	printf("Enter which type of person customer/broker/seller\n");
	scanf("%c",&ch);
	switch(ch)
	{
		case'c':
		case'C':
		amount=rs-(rs*(0.1));
		printf("Amount=%f",amount);
		break;
		case'b':
		case'B':
		amount=rs-(rs*(0.15));
		printf("Amount=%f",amount);
		break;
		case's':
		case'S':
		amount=rs-(rs*(0.20));
		printf("Amount=%f",amount);
		break;
		default:
		printf("Wrong choice\n");
	}
	getch();
}