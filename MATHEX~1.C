#include<stdio.h>
#include<conio.h>
#define max 20
void push(int);
int pop();
void push1(char);
int pop1();
char arr1[max],oper;
int top=-1,j=0,arr[max],top1=-1;
void main()
{

    int i=0,str,x,y;
    char a[max],temp;
    printf("Enter the prefix mathematical expression\n");
    gets(a);
    while(a[i]!='\0')
    {
	temp=a[i];
	if((temp>='a'&&temp<='z')||(temp>='A'&&temp<='Z'))
	{
	   printf("Enter the value of %c",temp);
	   scanf("%d",&str);
	   push(str);
	   j++;
	}
	else
	{
	    push1(temp);
	    j=0;
	}
	if(j==2)
	{

	   y=pop();
	   x=pop();
	   oper=pop1();
	   if(top1>1)
	   j=0;
	   else
	   j--;
	   switch(oper)
	   {
	   case '+':
	    temp=x+y;
	    break;
	   case '-':
	    temp=x-y;
	    break;
	   case '*':
	    temp=x*y;
	    break;
	   case '/':
	    temp=x/y;
	    break;
	   default:
	    printf("wrong input\n");
	   }
	   push(temp);
	   j++;
	}
	i++;
    }
    while(top1>=0)
    {
	if(j==2)
	{

	   y=pop();
	   x=pop();
	   oper=pop1();
	   j--;
	   switch(oper)
	   {
	   case '+':
	    temp=x+y;
	    break;
	   case '-':
	    temp=x-y;
	    break;
	   case '*':
	    temp=x*y;
	    break;
	   case '/':
	    temp=x/y;
	    break;
	   default:
	    printf("wrong input\n");
	   }
	   push(temp);
	   j++;
	}
	else
	exit(0);
    }
    printf("value=%d",arr[top]);
    getch();
}
void push(int x)
{
    if(top==max-1)
    {
	printf("stack is full\n");
    }
    else
    {
	top++;
	arr[top]=x;
    }
}
void push1(char x)
{
    if(top1==max-1)
    {
	printf("stack is full\n");

    }
    else
    {
	top1++;
	arr1[top1]=x;
    }
}
int pop()
{
    int x;
    if(top==-1)
    {
	printf("stack is empty");
	return -1;
    }
    else
    {
       x=arr[top];
       top--;
       return x;
    }
}
int pop1()
{
    char x;
    if(top1==-1)
    {
	printf("stack is empty");
	return -1;
    }
    else
    {
       x=arr1[top1];
       top1--;
       return x;
    }
}

