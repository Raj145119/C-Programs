#include<stdio.h>
#include<conio.h>
#define max 21
void main()
{
	//char ch;
	int i,j=max,k;
	clrscr();
	printf("Total No of STICK is 21\n");
	printf("You choose no of stick between 1 to 5\n");
	scanf("%d",&i);
	k=5-i;
	printf("The computer choose the %d stick\n",k);
	j=j-k-i;
	while(j!=1)
	{
		//j=j-k-i;
		printf("\nRemaining stick is %d",j);
		printf("\nYou choose no of stick between 1 to 5\n");
		scanf("%d",&i);
		k=5-i;
		printf("\nThe computer choose the %d stick\n",k);
		j=j-k-i;
	}
	getch();
	if(j==1)
	{
		printf("Computer Win the game\n");
	}
	getch();
}
