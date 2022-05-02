       #include<stdio.h>
       #include<conio.h>
       void main()
       {
		int x,y,z;
		clrscr();
		printf("enter 3 value/n");
		scanf("%d%d%d",x,y,z);
		if((x>y)&&(x>z))
		printf("x is greatest");
		else if(y>z)
		printf("y is middle");
		else
		printf("z is smallest");
		if((x>y)&&(y>z))
		{
		 printf("x is greatest,  y is middle,z is smallest");
		 }
		 else if((x>z)&&(z>y))
		 printf("x is greatest , z is middle, y is smallest");

		else if((y>x)&&(x>z))
		{
		 printf("y is greatest, x is middle,z is smallest");
		}
		 else if((y>z)&&(z>x))
		printf("y is greatest, z is middle, x is smallest");
		else if((z>x)&&(x>y))
		{
		  printf("z is greatest, x is middle,y is smallest");
		}
		else if((z>y)&&(y>x))
		printf("z is greatest, y is middle,x is smallest");
		getch();

       }
