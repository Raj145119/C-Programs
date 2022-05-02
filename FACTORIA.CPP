#include <iostream.h>
#include <conio.h>
void main()
{
	int x,fact=1,i;

	clrscr();
	//cout<<"\nC++ may aapka SWAGAT hae...";
	cout<<"\nEnter no.";
	cin>>x;
	for(i=x;i>=1;i--)
	{
		fact=fact*i;
	}
	cout<<fact<<endl;
	getch();
}