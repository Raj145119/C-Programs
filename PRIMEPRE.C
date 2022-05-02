#include<stdio.h>
#include<conio.h>
void main()
{
	int x=1,y,z;
	clrscr();
	printf("prime number\n");
	while(x<=100)
	{
		y=0;
		for(z=1;z<=x;z++)
		{
			if(x%z==0)
			{
				y++;
			}

		}
		if(y==2)
			printf( "\ %d",x);

		x++;
	}

       getch();
}