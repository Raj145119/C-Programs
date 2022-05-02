#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,z;
        clrscr();
	printf("enter 3 value");
	scanf("%d%d%d",&x,&y,&z);
	if(x>y)
	{
	 if(x>z)
	 {
	  printf("x is greatest");
	 }
	 else if(y>z)
	  {
	   printf("y is medium");
	  }
	  else
	  {
	   printf("z is smallest");
	  }
	}
	if((x>y)&&(y>z))
	printf("x is greatest ,y is medium ,z is smalest");
	if((y>x)&&(x>z))
	printf("y is greatest, x is medium,z is smalest");
	if((z>x)&&(x>y))
	printf("z is greatest, x is medium,y is smalest");
	if((z>y)&&(y>z))
	printf("z is greatest, y is medium,x is smalest");
	if((y>z)&&(z>x))
	printf("y is greatest,z is medium,x is smalest");
	if((x>z)&&(z>y))
	printf("x is greatest,z is medium ,y is smalest");
	getch();
}