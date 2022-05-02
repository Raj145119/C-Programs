#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d,e,z;
	clrscr();
	printf("enter 5 value/n");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	z=(a+b+c+d+e)*1/5;
	if((100>z)&&(z>70))
	  printf("*=%d",z);
	  else if((70>z)&&(z>50))
	 cprintf("1st=%d",z);
	 if((50>z)&&(z>=30))
	  printf("pass");
	  if(z<30)
	  printf("fail");
	 getch();
}