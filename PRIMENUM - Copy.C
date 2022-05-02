#include<stdio.h>
#include<conio.h>
void main()
{
	int  i,num;
	clrscr();
	printf("enter the number\n");
	scanf("%d",&num);
	i=2;
	while(i<=num-1)
	{
		if(num%i==0)
	       {	printf("%d is not prime number",num);
	       break;
	       }

	i++;
	}
	if(i==num)
	printf("%d is prime number",num);
	getch();
}