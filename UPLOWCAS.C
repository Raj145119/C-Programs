#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	char a,b;
	clrscr();
	printf("Enter the character\n");
	scanf("%c",&a);
	for(i=65;i<=90;i++)
	{
		if(a==i)
		{
			b=a+32;
			break;
		}
		else
		i++;

	}
      /*	for(i=93;i<=118;i++)
	{
		if(a==i)
		{
			b=a-32;
		}
		else
		i++;
	}  */
	printf("%c",b);
	getch();
}