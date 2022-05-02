#include<stdio.h>
#include<conio.h>
void main()
{
	int n,x,n1,m,rev=0;
	clrscr();
	printf("\nenter the number");
	scanf("%d",&n);
	n1=n;
	 while(n!=0)
	{
		x=n%10;

		n=n/10;
	     printf("%d",x);
	     rev=rev*10+x;
	     }


	    // sum=sum+x;

	   if(n1==rev)
	   {
	 printf("yes");}
	 else
	printf("\nno");
      // printf("\n%d",n1);
	 getch();

}

