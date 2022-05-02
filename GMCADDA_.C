#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main(){
	int gm,gd,x1=100,y1=200,x2=500,y2=400,i,xinc,yinc,dx,dy,step;
	gm=gd=DETECT;
	initgraph(&gm,&gd," ");
	printf("Enter the 4 point for line");

      scanf("%d",&x1);
      scanf("%d",&y1);
      scanf("%d",&x2);
      scanf("%d",&y2);
	dx=(x2-x1);
       dy=(y2-y1);
       //int step;

       if(dx>dy){
	 step=abs(dx);
       }else{
	 step=abs(dy);
       }
       xinc=dx/step;
       yinc=dx/step;
	putpixel(x1,y1,6);
	for(i=1;i<=step;i++){
	    x1=x1+xinc;
	    y1=y1+yinc;
	    putpixel(x1,y1,6);
	}
       //	putpixel(x1,y1,3);
	getch();
	closegraph();
}