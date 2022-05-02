#include <stdio.h>
#include<conio.h>
#define NUMBEROFBITS 8
/****************************************************/
main ()
{ short i,j,bit;
short MASK = 0x80;
clrscr();
printf ("Enter any number less than 128: ");
scanf ("%h", &i);
if (i > 128)
{
printf ("Too big\n");
return (0);
}
printf ("Binary value = ");
for (j = 0; j < NUMBEROFBITS; j++)
{
bit = i & MASK;
printf ("%1d",bit/MASK);
i <<= 1;
}
printf ("\n");
getch();
}