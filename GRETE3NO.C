#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,gr,mid,lwr;
	clrscr();
	printf("Enter the Three no.\n");
	scanf("%d %d %d",&a,&b,&c);
	gr=a>b&&a>c?a:b>c?b:c;
	lwr=a<b&&a<c?a:b<c?b:c;
	mid=(a<gr)&&(a>lwr)?a:(b<gr)&&(b>lwr)?b:c;
	printf("Greatest no. =%d,Middle no =%d, Lowest no. =%d",gr,mid,lwr);
	getch();
}