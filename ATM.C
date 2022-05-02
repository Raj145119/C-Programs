#include<stdio.h>
#include<conio.h>
void main()
{
	int rs,res;
	clrscr();
	printf("Enter the Amount\n");
	scanf("%d",&rs);
	if(rs%100==0)
	{
		if(rs>=2000)
		{
			res=rs/2000;
			printf("multiple of 2000 notes is=%d\n",res);
			rs=rs%2000;
			res=rs/500;
			printf("Multiple of 500 notes is =%d\n",res);
			rs=rs%500;
			res=rs/100;
			printf("multiple of 100 notes is =%d\n",res);

		}
		else
		{
			res=rs/500;
			printf("Multiple of 500 notes is =%d\n",res);
			rs=rs%500;
			res=rs/100;
			printf("multiple of 100 notes is =%d",res);
		}

	}
	else
	{
		printf("Please Enter the Amount Multiple of 100");
	}
	getch();

}