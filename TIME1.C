#include <stdio.h>
#include <time.h>
#include<conio.h>

void main()
{
   time_t t;

   time(&t);
   printf("Today's date and time: %s\n", ctime(&t));
   getch();c
}