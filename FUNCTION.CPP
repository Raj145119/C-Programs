#include<iostream.h>
#include<conio.h>
#include<math.h>
int show(int);
int show(int x)
{
	int i,res=0,j=0,k=2;
	while(x!=0)
	{
		i=x%10;
		x=x/10;
		res=res+pow(10,j)*i;
		res=res*k;
		j=j+2;
		k--;
	}
	return res;
}
void main()
{
	int i,s;
	clrscr();
	cout<<"Enter the no.between 55 to 59 or 65 to 69 so on... \n";
	cin>>i;
	s=show(i);
	cout<<s;
	getch();
}