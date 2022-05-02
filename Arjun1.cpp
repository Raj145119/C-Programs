#include<iostream>
#include<dos.h>
#include<stdlib.h>
#include<stdio.h>
#include<windows.h>

//using namespace std;

int main(){
	volatile int i=0;
	while(i!=100)
	{
		printf("%d",i);
		delay(1000);
	}
	
	
}
