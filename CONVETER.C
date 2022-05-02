#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int x,y=0,z,i=0,b,b1,s=0,sum=0,j=0,s1,y1;
	clrscr();
	printf("Enter the no.\n");
	scanf("%d",&x);
	printf("Enter the from base\n");
	scanf("%d",&b);
	printf("Enter the to base\n");
	scanf("%d",&b1);
      //	b2=b1;
	while(x!=0)
	{
		y=x%10;
		s=s+y*pow(b,i);
		x=x/10;
		i++;

	}
      //	getch();
	//s1=s;
	printf("%d",s);
	getch();
       //	fflush(stdin);
     // printf("%d\n",s);
      //	getch();   **/
	while(s!=0)
	{
		y1=s%b1;
		sum=sum+y1*pow(10,j);
		s=s/b1;
		j++;
	}
	printf("\n%d",sum);

	getch();
}