#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
	int x=65,i,res=0,j=1,k,a=0;
	clrscr();
	while(x!=0)
	{
		i=x%10;
		x=x/10;
		res=res+pow(10,j)*i;
		j--;

	}
	//cout<<res;
	j=2;
	while(res!=0)
	{
		k=res%10;
		res=res/10;
		if(j==2)
		a=a+pow(10,j)*k;
		j--;
		if(j==1)
		a=a+k*2;
	}
		cout<<a;
	getch();
}