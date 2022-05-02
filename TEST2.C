#include<stdio.h>
#include<conio.h>
void main(){

	int x=97;
	int y=sizeof(x++);
	printf("%d",y);
	getch();
}