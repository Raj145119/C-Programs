#include<stdio.h>
#include<conio.h>
#define max 20
int valid,top=-1;
char str[max];
int empty()
{

    if(top==-1)
        return 1;
    else
        return 0;
}
void push(char temp)
{
    top++;
    str[top]=temp;
}
int pop()
{
    char temp;
    temp=str[top];
    top--;
    return temp;
}
int main()
{

    int i=0;
    char s[max],temp,m;
    printf("Enter the expression\n");
    gets(s);
    while(s[i]!='\0')
    {
	if(s[i]=='('||s[i]=='{'||s[i]=='[')
        {
	    temp=s[i];
	    push(temp);
	    i++;
        }
	if(s[i]==')'||s[i]=='}'||s[i]==']')
        {
            if(empty())
            {
                valid=0;
            }
            else
            {
                m=pop();
		if(m=='('||m=='['||m=='{')
		valid=1;
            }
        }
        i++;
    }
    if(valid)
        printf("Valid Expression\n");
    else
        printf("Not vallid Expression\n");
    return 0;
}
