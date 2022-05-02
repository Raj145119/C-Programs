#include<stdio.h>
#include<conio.h>
void main()
{
	int i,num;
	clrscr();
	printf("\nenter the number");
	scanf("%d",&num);
	for(i=2;i<=num-1;i++)
	{
		if(num%i==0)
		{
			printf("not a prime nummber");
			break;
		}

	}
	if(i==num)
	printf("prime number");
	getch();
}