#include<iostream.h>
#include<conio.h>
#define max 10
int stak[max],top=-,m;
class stack
{
	public:
	void push(int);
	void pop();
	void display();
	void search(int);
	void count();
};
void main()
{
	int i,ch;
	clrscr();
	while (1)
	{
		cout<<"ENTER THE CHOICE\n";
		cout<<"ENTER  1: for push\n";
		cout<<"ENTER  2:for pop\n";
		cout<<"ENTER  3: for display\n";
		cout<<"ENTER  4:for search\n";
		cout<<"ENTER  5:for count\n";
		cout<<"ENTER  6: for exit\n";
		cin>>ch;

	     switch(ch)
	     {
			case 1:
				if(top==max-1)
				{
					cout<<"stak over flow \n";
					break;
				}
				cout<<"ENTER THE DATA\n";
				cin>>m;
				push(m);
			break;
			case 2:
				if(top==-1)
				{
					cout<<"stak is empty....\n";
					break;
				}
				pop();
			break;
			case 3:
				if(top==-1)
				{
					cout<<"stack is empty....\n";
					break;
				}
				display();
			break;
			case 4:
			       if(top==-1)
				{
					cout<<"stack is empty....\n";
					break;
				}
				cout<<"Enter the data to search\n";
				cin>>m;
				search(m);
			break;
			case 5:
				if(top==-1)
				{
					cout<<"stack is empty....\n";
				break;
				}
				count();
			break;
			case 6:
				exit();
			default:
				cout<<"WRONG POSITION\n";
	     }
	     getch();
      }
}
void stack::push(int item)
{
	top++;
	stak[top]=item;
	cout<<"data pused\n";
}
void stack::pop()
{
	cout<<(top+1) <<"DATA=\n"<<stak[top];
	top--;
}
void stack::display()
{
	int i,n=1;
	for (i=top;i>=0;i--)
	{
		cout<<n++<<" data="<<stak[i];
	}
}
void stack::search(int item)
{
	int i;
	for(i=0;i<=top;i++)
	{
		if(item==stak[i] )
		{
			cout<<"\ndata is found is "<<(i+1);
			return;
		}
	}
	cout<<"data not found in stak\n";
}
void stack::count()
{
	int i;
	for(i=0;i<=top;i++);
	cout<<"total no oddbbf data in stak"<<i;
}
