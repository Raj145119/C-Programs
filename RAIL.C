#include<stdio.h>
#include<conio.h>
void booking();
//void cancel();
char name;
float amount;
void main()
{
	int age,h,ac,a,b;
	char name;
	float amount;
	clrscr();

	printf("\t\t***Railway Reservation****\n");
	getch();
	printf("Enter 1 for Booking ticket\n");
	printf("Enter 2 for Cancellation Ticket\n");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
		while(1){
		booking();}
	       //	break;
		case 2:
	     //	cancel();
		default:
		printf("choose correct option");
	}
}
void booking()
{
	int age,d,b,rs;
	char a;
      //	do
	//{
		printf("\t Welcome in Railway Ticket booking\n");
		printf("Enter 1 for a.c 1st class\n");
		printf("Enter 2 for a.c 2nd class\n");
		printf("Enter 3 for a.c 3rd class\n");
		printf("Enter 4 for a.c sleeper\n");
		scanf("%d",&b);
	//printf("\n amount=%d",rs);
	getch();
		printf("\nEnter the Distance in kilomiter ");
		scanf("%d",&d);
	switch(b)
	{
		case 1:

		//printf("Enter the Name\n");
		//scanf("%s",&name);
		printf("Enter the Age\n");
		scanf("%d",&age);
		rs=d*5;
		if(age<=5)
		{
			printf("no charge in ticket \n");
			printf("\nYour ticket is confirmed\n");
		}
		else if(age>5&&age<=12)
		{
			amount=rs-((rs*50)/100);
			printf("Your Amount=%f",amount);
			printf("\nYour ticket is confirmed\n");

		}
		else if(age>12 && age<=59)
		{
			printf("%d",rs);
			printf("\nYour ticket is confirmed\n");
		}
		else if(age>=60 && age<=100)
		{
			amount=rs-((rs*50)/100);
			printf("Your Amount=%f",amount);
			printf("\nYour ticket is confirmed\n");
		}
		else
			printf("wrong choice");

		break;
		case 2:
		//printf("Enter the Name\n");
		//scanf("%c",&name);
		printf("Enter the Age\n");
		scanf("%d",&age);
		rs=d*3;
		if(age<=5)
		{
			printf("no charge in ticket \n");
			printf("\nYour ticket is confirmed\n");
		}
		else if(age>5&&age<=12)
		{
			amount=rs-((rs*50)/100);
			printf("Your Amount=%f",amount);
			printf("Your ticket is confirmed\n");

		}
		else if(age>12 && age<=59)
		{
			printf("%d",rs);
			printf("\nYour ticket is confirmed\n");
		}
		else if(age>=60 && age<=100)
		{
			amount=rs-((rs*50)/100);
			printf("Your Amount=%f",amount);
			printf("\nYour ticket is confirmed\n");
		}
		else
			printf("wrong choice");
		case 3:
		//printf("Enter the Name\n");
		//scanf("%c",&name);
		printf("Enter the Age\n");
		scanf("%d",&age);
		rs=d*2;
		if(age<=5)
		{
			printf("no charge in ticket \n");
		}
		else if(age>5&&age<=12)
		{
			amount=rs-((rs*50)/100);
			printf("Your Amount=%f",amount);
			printf("Your ticket is confirmed\n");

		}
		else if(age>12 && age<=59)
		{
			printf("Amount=%d",rs);
			printf("\nYour ticket is confirmed\n");
		}
		else if(age>=60 && age<=100)
		{
			amount=rs-((rs*50)/100);
			printf("Your Amount=%f",amount);
			printf("\nYour ticket is confirmed\n");
		}
		else
			printf("wrong choice");
		break;
		case 4:
	       //	printf("Enter the Name\n");
		//scanf("%c",&name);
		printf("Enter the Age\n");
		scanf("%d",&age);
		if(age<=5)
		{
			printf("no charge in ticket \n");
		}
		else if(age>5&&age<=12)
		{
			amount=rs-((rs*50)/100);
			printf("Your Amount=%f",amount);
			printf("Your ticket is confirmed\n");

		}
		else if(age>12 && age<=59)
		{
			printf("Amount=%d",rs);
			printf("\nYour ticket is confirmed\n");
		}
		else if(age>=60 && age<=100)
		{
			amount=rs-((rs*50)/100);
			printf("Your Amount=%f",amount);
			printf("\nYour ticket is confirmed\n");
		}
		else
			printf("wrong choice");
		//default

	}
	//exit(1);
	      //	printf("Do you want to another ticket y/n ?");
	       //	scanf("%d",&a);
      //	}while(a==115);
	getch();
}