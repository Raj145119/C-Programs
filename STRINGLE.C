#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
      int i;
      char ch1[10];
      clrscr();
      printf("enter the string");
      gets(ch1);
      i=strlen(ch1);
      printf("%d",i);
      getch();
}