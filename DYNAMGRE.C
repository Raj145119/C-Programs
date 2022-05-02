/*enter the number in array and find greatest value using dynamic memory
 pointer*/
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
	int *p,i,s,j,gr;
	printf("\n Enter the size of array");
	scanf("%d",&s);
	  p=(int *)malloc(sizeof(int)*s);
	printf("Enter the %d values",s);

	for(i=0;i<s;i++)
	  scanf("%d",p+i);
	 gr=*p;
	for(i=0;i<s;i++)
	{
	  if(gr<*(p+i))
	   {
	     gr=*(p+i);
	    // p[i+1]=p[i];
	    // p[i]=gr;
	   }
	  }
	  printf("value %d\n",gr);

}