/*type casting of object*/
#include<conio.h>
#include<conio.h>
class type
{
	int x;
	public:
	void show();
	operator int ();
};
type::type(int i)
{
	x=i;
}
void type::show()
{
	cout<<"x="<<x;
}
type::operator int ()
{
	return x;
}
void main()
{
	int m,n;
	clrscr();
	cout<<"Enter a value\n";
	cin>>m;
	type obj(m);
	n=obj;
	cout<<"n="<<n;
	getch();
}