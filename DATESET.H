/* struct date {
  int da_year;     /* current year */
 // char da_day;     /* day of the month */
 // char da_mon;     /* month (1 = Jan) */
//};

#include <dos.h>
#include <stdio.h>
#include <conio.h>

void main()
{
   struct date c;
   /*{
	struct  d;
	struct  c;
   }; */

   clrscr();
   //getdate(&d);
   printf("Enter the Date of Birth\n");
   printf("**** DATE ** MONTH **  YEAR *****\n");
   getdate(&c);
   getdate(&c);
   getdate(&c);
   printf("The current year is: %d\n", c);
   printf("The current day is: %d\n", c);
   printf("The current month is: %d\n", c);

   getch();
}