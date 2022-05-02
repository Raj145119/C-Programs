//#include<stdio.h>
//#include<conio.h>
//#include<math.h>
//#include<my_global.h>
//#include<mysql.h>
void main()
{
	int x,y=0,res=0,r=0,p=0;
	clrscr();
	printf("Enter the no.\n");
	scanf("%d",&x);
	r=x;
	//printf("%d",x);
	while(x!=0)
	{
		y=x%10;
		//printf(" %d ",y);
		p=(y*y*y);
		res=res+p;
		//printf(" %d ",x);
		x=x/10;


	}
	//printf("%d",res);
	if(res==r)
	printf("Armstrong no=%d",res);
	else
	printf("\nNot Armstrong no\n ");
	getch();
}