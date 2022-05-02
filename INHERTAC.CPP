#include<iostream.h>
#include<conio.h>
class Test
{
	private:
		int x;
	protected:
		int y;
	public:
		int z;
	void display()
	{
		cout<<"X="<<x<<endl;
		cout<<"Y="<<y<<endl;
		cout<<"Z="<<z<<endl;
	}
	/*void setdata()
	{
		x=20;
		y=30;
		z=40;
	} */
};
class Best:private Test
{
	private:
		int p;
	protected:
		int q;
	public:
		int r;
	void displaybest()
	{
		cout<<"P="<<p<<endl;
		cout<<"Q="<<q<<endl;
		cout<<"R="<<r<<endl;
		cout<<"Y="<<y<<endl;
		cout<<"Z="<<z;
	}
	void setdatabest()
	{
		p=200;
		q=300;
		r=400;
		y=90;
	       //	x=56;
		z=78;
	}


};
void main()
{
	Best t1;
	clrscr();
	//t1.x=11;
	//t1.y=12;
	//t1.z=13;
	//t1.p=14;
	//t1.q=15;
	t1.r=16;
	//t1.setdata();
	t1.setdatabest();
	//t1.display();
	t1.displaybest();
	getch();
}