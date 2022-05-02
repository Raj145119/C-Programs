#include<conio.h>
#include<iostream.h>
#include<string.h>
class point
{
	int arr[10],gr,s1;
	public:
	int* show(int []);
	char* show(char *,char *);
	int show(int,int,int);
};
int* point::show(int ar[])
{
	for(int i=0;i<9;i++)
	{
		for(int j=i;j<10;j++)
		{
			if(ar[i]>ar[j])
			{
				s1=ar[i];
				ar[i]=ar[j];
				ar[j]=s1;
			}
		}
	}
	return ar;
}
char* point::show(char *s,char *st)
{
	strcat(s,st);
	return s;
}
int point::show(int x,int y,int z)
{
	gr=(x>y)?(x>z)?x:z:(y>z)?y:z;
	return gr;
}
void main()
{
	clrscr();
	int i,j,k,l,g,a[10],*b;
	char *p,*q,*s2;
	point p1;
	cout<<"Enter the 10 values in array\n";
	for(i=0;i<10;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter the 1st string\n";
	cin>>p;
	cout<<"Enter the second string\n";
	cin>>q;
	cout<<"Enter the 3 values \n";
	cin>>j>>k>>l;
	b=p1.show(a);
	s2=p1.show(p,q);
	g=p1.show(j,k,l);
	for(i=0;i<10;i++)
	cout<<b[i] <<"\t";
	cout<<"\nConcatenate string="<<s2;
	cout<<"\ngreater value is ="<<g;
	getch();

}