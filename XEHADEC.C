#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	char arr[6];
	int i,j,b,c=0,p=0;
	clrscr();
	printf("Enter the 4 hexadecimal n0.\n");
	for(i=0;i<4;i++)
	{
		fflush(stdin);
		scanf("%c",&arr[i]);
	}
	arr[4] = '\0';
	printf("Entered Character is  %s\n",arr);

	for(j=0;j<4;j++)
	{
	switch(arr[j])
	{
		case 'A':
		b=10;
		break;
		case 'B':
		b=11;
		break;
		case 'c':
		b=12;
		break;
		case 'D':
		b=13;
		break;
		case 'E':
		b=14;
		break;
		case 'f':
		b=15;
		break;
		default:
		b=(int)(arr[j]-48);
	}
	c=c+b*pow(16,p);
	printf("%d ",c);
	p++;
	}
	//printf("%d",c);
      /*for(i=0;i<5;i++)
	{
	printf("%c\n",arr[i]);
	} */

	getch();


}
