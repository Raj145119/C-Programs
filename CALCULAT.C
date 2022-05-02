#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("enter the no.1,addition\n");
	printf("enter the no.2,substraction\n");
	printf("enter the no.3,multiplication\n");
	printf("enter the no.4,division\n");
	printf("enter the no.5,modulus\n");
	//printf("enter 2 no.(oprent) and 1 choice option\n:");

	//printf("enter the the 3 value\n:");
	scanf("%d%d%d",&c,&a,&b);
	switch(c)
	{
		case 1:
		printf("%d",a+b);
		break;
		case 2:
		printf("%d",a-b);
		break;
		case 3:
		printf("%d",a*b);
		break;
		case 4:
		printf("%d",a/b);
		break;
		case 5:
		printf("%d",a%b);
		break;
		default:
		textcolor(RED);
		cprintf("invalid option");
	}
	getch();

}