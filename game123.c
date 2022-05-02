#include<graphics.h>
#include<process.h>
#include<dos.h>
#include<conio.h >
#include<alloc.h>
#include<stdio.h>
int i =20 , j = 150 , cun = 70 , scr = 0 , k = 0 , tmp = 0, a = 300 , b = 300;
int x = 1 , y = 0 , res = 100 , e=0,E=0;
typedef struct dnode
{
in t x,y;
struct dnode *next;
} node;
node *h = NULL;
int menu();
void menu_ l(int );
void help(int);
int m_test(int , int);
int drow();
void scr_m enu(int);
void cir_d();
int drow_s( );
void test();
int key_b( int );
int drow()
{
in t ch;
node * temp,*ptr;
//E=0;
setcol or(14);
line(i,j,i,j);
ptr=(node *)malloc(sizeof(node));
ptr-> x = i;
ptr-> y = j ;
ptr-> next = NULL;
if(h == NULL)
{
h = ptr;
}
e lse
{
te mp = h;
while(tem p->next != NULL)
{
temp = temp->next;
}
te mp->next = ptr;
}
setcolor(4);
temp = h;
while(tem p->next != NULL)
{
if( temp-> x == ptr->x && temp->y == ptr->y)
{
s etcolor(4);
outtextxy(25 0,190,"GAME OVER");
scr_menu(0);
setcolor(15);
outtextxy(480 ,380,"Press x to Exit");
getch();
while(1)
{
if (kbhit())
{ ch=g etch();
if(ch==120)
{
E =1;
//ret urn E; //break; // exit(1);
}
}
d elay(10);
}
}
te mp = temp-> next;
}
cir_d();
scr = sc r + tmp;
if( k >= (70 + scr ) )
{
te mp=h;
setcolor (0);
line(temp->x ,temp->y,temp->x,temp->y);
h=temp->next;
free(temp);
}
re turn E;
}
//
void scr_menu(int c)
{
s etcolor(c);
outtextxy(40 0,420,"Press x to Exit");
outtextxy(120,420,"Press P to Pause ");
outtextxy(120,420,"Press C to Continu" );
}
//
vo id cir_d()
{
c ircle(a,b,1);
circle(a,b,2);
circle(a,b,3);
if( ( (i+3) == a || (a+3) == i) && ( ( (b+3) - j) <= 6 && ((b+3)-j) >= 1 ) )
{
s etcolor(0);
circle(a,b,1) ;
circle(a,b,2);
circle(a,b,3);
tmp=2;
}
e lse if( ( j+3 ==b || b+3 == j ) && (a+3) - i <= 6 && (a+3) - i >= 1 )
{
s etcolor(0);
circle(a,b,1) ;
circle(a,b,2);
circle(a,b,3);
tmp=2;
}
e lse
{
tm p=0;
}
}
//
in t drow_s()
{
in t ch;
if(drow())
{
E =1;
retur n E;
}
if (kbhit())
{ ch=g etch();
if(!key_b( ch ))
{
E =1;
retur n E;
}
}
if(tmp==2)
{
a += 109;
b += 70;
if( a>=ge tmaxx()-25 || a<=25)
{
a =29;
}
if ( b>=395 || b<=25)
{
b =39;
}
k =cun++;
}
i= i+x;
j=j+y;
test();
return 0;
}
//
void test()
{
if (i >= getmaxx()-20 )
{
i= 20;
}
e lse if(i < 20 )
{
i= getmaxx()-20;
}
if (j >= 400)
{
j= 20;
}
e lse if(j < 20)
{
j= 400;
}
}
//
in t key_b( int ch)
{
E =1;
if(ch==72 && res!=80)
{
x =0;
y=-1 ;
res=7 2;
}
if (ch==75 && res!= 77)
{
x =-1;
y=0;
res= 75;
}
if (ch== 77 && res!=75)
{
x =1;
y=0;
res= 77;
}
if (ch==80 && res != 72)
{
x =0;
y=1;
res= 80;
}
if (ch==120 )
{
E=0;
//retu rn E; // exit(0);
}