#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main(){
	int gm,gd,x=20,y=20,r=50;
	int d=1-r;
	gm=gd=DETECT;
	initgraph(&gm,&gd," ");
	while(x>y){
		if(d>=0){
			y=y-1;
			x=x+1;
			d=d+2*x-2*y+3;
		}
		else if(d<0){
			x=x+1;
			d=d+2*x+3;
		}
		putpixel(x,);
	}
}