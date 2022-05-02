#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	clrscr();
	printf("enter the char\n");
	scanf("%c",&ch);
	switch(ch)
	{
	  case 'a':
	  printf("%c is vowel",ch);
	  break;
	  case 'e':
	  printf("%c is vowel",ch);
	   break;
	  case 'i':
	  printf("%c is vowel",ch);
	  break;
	  case 'o':
	  printf("%c is vowel",ch);
	   break;
	  case  'u':
	  printf("%c is vowel",ch);
	   break;
	  default:
	  printf("%c is consonen",ch);

	}
	getch();
}