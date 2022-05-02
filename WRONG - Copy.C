#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,z,gr,s,f;
	printf("eter 3 value/n");
	scanf("%d%d%d",&x,&y,&z);
	gr=(x>y)?(x>z)?x:z:(y>z)?y:z;
	s=(y>x)?(y>z)?y:z:(x>z)?x:z;
	f=(z>x)?(z>y)?z:y:(x>y)?x:y;
	//if(z>x&&z>y)
	{
	  printf("greater no=%d",gr);
	  printf("midle no=%d",s);
	  printf("loest no=%d",f);
	}
	getch();
}