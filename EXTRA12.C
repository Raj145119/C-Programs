#include<conio.h>
#include<stdio.h>
void main()
{
  int a;
  float b;
  char c;
  clrscr();
  scanf("%3d%5f",&a,&b);
  fflush(stdin);
  scanf("%c",&c);
  fflush(stdin);
  printf("%3d,%5f,%2c",a,b,c);

  getch();
}