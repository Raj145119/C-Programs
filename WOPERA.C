#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int a,b,res;
	char op;
	clrscr();
	printf("Enter the 1st no.\n");
	scanf("%d",&a);
	printf("Enter the 2nd no.\n");
	scanf("%d",&b);
	fflush(stdin);
	printf("Enter the operator \n");
	scanf("%c",&op);
	switch(op)
	{
		case '+':
		res=a+b;
		break;
		case '-':
		res=a-b;
		break;
		case '*':
		res=a*b;
		break;
		case '/':
		res=a/b;
		break;
		printf("%d",res);
		default:
		printf("Enter the correct operator\n");
	}

      //	printf("%d",res);
	getch();
}