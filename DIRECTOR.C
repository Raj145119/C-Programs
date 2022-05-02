#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<dir.h>
void main()
{
	int check;
	clrscr();
	prntf("Enter the directory path and name to be created(c:/name):");
	gets(dirname);
	check=mkdir(dirname);
	if(!check)
		printf("Directory created\n");
	else
		printf("Unable to create directory\n");
	exit(1);
	getch();
	ststem("dir/p");
	getch();
}