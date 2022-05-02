#include<stdio.h>
#include<conio.h>
#include<alloc.h>
void input();
void main()
{
	clrscr();
	input();
	getch();

}
void input()
{
	int *p,i,s;
	printf("\n Enter the size of array");
	scanf("%d",&s);
	  p=(int *)malloc(sizeof(int)*s);
	printf("Enter the %d values",s);

	for(i=0;i<s;i++)
	  scanf("%d",p+i);

	for(i=0;i<s;i++)
	  printf("value %d\n",*(p+i));
}