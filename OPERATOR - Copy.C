#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int x,y,z,a,b,c,e,f,g,h,i,j,z1;
	clrscr();
	printf("\nEnter the number 1 for airthmatic oper.");
	printf("\nEnter the number 2 for relational oper.");
	printf("\nEnter the number 3 for logical oper.");
	printf("\nEnter the number 4 for increment/decrement oper.");
	printf("\nEnter the number 5 for assignment poer.");
	printf("\nEnter the number 6 for conditional oper.");
	printf("\nEnter the number 7 for bitwise oper.");
	printf("\nEnter the number 8 for size of oper.");
	printf("\nEnter the number 9 for comma oper.");
	printf("\nEnter the 3 number");
	scanf("%d%d%d",&z,&x,&y);
	switch(z)
	{
	  case 1:
	  printf("enter the no.1,addition\n");
	  printf("\nenter the no.2,substraction");
	  printf("\nenter the no.3,multiply");
	  printf("\nenter the no.4,division");
	  printf("\nenter the no.5,modulus");
	  printf("\nenter the no.");
	  scanf("%d",&a);
	  switch(a)
	  {
	    case 1:
	    printf("%d",x+y);
	    break;
	    case 2:
	    printf("%d",x-y);
	    break;
	    case 3:
	    printf("%d",x*y);
	    break;
	    case 4:
	    printf("%d",x/y);
	    break;
	    case 5:
	    printf("%d",x%y);
	    break;
	    default:
	    printf("\ninvalid option");
	  }
	  break;
	  case 2:
	  printf("\nenter the no.1,less than");
	  printf("\nenter the no.2,greaterthan");
	  printf("\nenter the no.2,lessthan equall");
	  printf("\nenter the no.3,greaterthan equall");
	  printf("\nenter the no.4,equallto");
	  printf("\nenter the no.5,not equall to");
	  printf("\nenter the no.");
	  scanf("%d",&b);
	  switch(b)
	  {
	    case 1:
	    printf("%d",x<y);
	    break;
	    case 2:
	    printf("%d",x>y);
	    break;
	    case 3:
	    printf("%d",x<=y);
	    break;
	    case 4:
	    printf("%d",x>=y);
	    break;
	    case 5:
	    printf("%d",x=y);
	    break;
	    case 6:
	    printf("%d",x!=y);
	    break;
	    default:
	    printf("invalid optation");
	   }
	   break;
	   case 3:
	   printf("\nenter no.1,logical AND");
	   printf("\nenter no.2,iogical OR");
	   printf("\nenter no.3,logical NOT");
	   printf("\nenter no.");
	   scanf("%d",&c);
	   switch(c)
	   {
	     case 1:
	     printf("%d",(x>y)&&(y<x));
	     break;
	     case 2:
	     printf("%d",(x<y)||(x>y));
	     break;
	     case 3:
	     printf("%d",x!=y);
	     break;
	     default:
	     printf("invalid optation");
	   }
	   break;
	   case 4:
	   printf("\nenter no.1,increment");
	   printf("\nenter no.2,decrement");
	   printf("\nenter the no.");
	   scanf("%d",&e);
	   switch(e)
	   {
	     case  1:
	     printf("%d",(x+y++));
	     break;
	     case 2:
	     printf("%d",(--x+y));
	     break;
	     default:
	     printf("invalid optation\n");
	   }
	   break;
	   case 5:
	   printf("\nenter the no.1,assignment");
	   printf("\nenter the no.2,plus&assignment");
	   printf("\nenter the no.3,minu&assignment");
	   printf("\nenter the no.4,multiply&assignment");
	   printf("\nenter the no.5,division&assignment");
	   printf("\nenter the no.6,modules&assignment");
	   printf("\nenter the no.");
	   scanf("\n%d",&f);
	   switch(f)
	   {
	     case  1:
	     printf("l=%d",x=y);
	     break;
	     case 2:
	     printf("l=%d",x+=y);
	     break;
	     case 3:
	     printf("l=%d",x-=y);
	     break;
	     case 4:
	     printf("l=%d",x*=y);
	     break;
	     case 5:
	     printf("l=%d",x/=y);
	     break;
	     case 6:
	     printf("l=%d",x%=y);
	     break;
	     default:
	     printf("\ninvalid optation");
	   }
	   break;
	   case 6:
	   printf("\nenter the  no.");
	   scanf("%d",&g);
	   switch(g)
	   {
	     case 1:
	     printf("gr=%d",((x>y)?x:y));
	     break;
	     case 2:
	     default:
	     printf("\ninvalid optation");
	   }
	   break;
	   case 7:
	   printf("\nenter no.1,bitwiseAND");
	   printf("\nenter no.2,bitwiseOR");
	   printf("\nenter no.3,bitwiseXOR");
	   printf("\nenter no.4,bitwise once's complement");
	   printf("\nenter no.5,biiwise right shift");
	   printf("\nenter no.6,bitwise left shift");
	   printf("\nenter the no..");
	   scanf("%d",&h);
	   switch(h)
	   {
	      case 1:
	      z1=x&y;
	      printf("z1=%d",z1);
	      break;
	      case 2:
	      printf("z1=%d",x|y);
	      break;
	      case  3:
	      printf("z1=%d",x^y);
	      break;
	      case 4:
	      printf("z1=%d",~x);
	      break;
	      case 5:
	      printf("z1=%d",x>>y);
	      break;
	      case 6:
	      printf("z1=%d",x<<y);
	      break;
	      default:
	      printf("\ninvalid optation");
	   }
	   break;
	   case 8:
	   printf("\nenter the no.");
	   scanf("%d",&i);
	   switch(i)
	   {
	     case 1:
	     printf("x=%d",sizeof (x));
	     printf("y=%d",sizeof (y));
	     break;
	     default:
	     printf("\ninvalid optation");
	   }
	   break;
	   case 9:
	   printf("\nenter the number");
	   scanf("%d",&j);
	   switch(j)
	   {
	     case 1:
	     printf("z1=%d",(x,y));
	     break;
	     default:
	     textcolor(RED);
	     cprintf("\ninvalid optation");
	   }
	   break;
	   default:
	   textcolor(RED);
	   cprintf("\n invalid optation");
	   }
	   getch();

}