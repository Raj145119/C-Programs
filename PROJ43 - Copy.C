#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<string.h>
void create();
void insert();
void delete1();
 struct record
 {
	long int id,mo,sal;
	char *name;
	struct record *next;
 }*start;
 int x,y;
 void main()
 {
	int ch;
	clrscr();
	start=NULL;
	puts("Enter your choice\n");
	puts("Press 1 for create record\n");
	puts("Press 2 for display\n");
	puts("Press 3 for create record\n");
	puts("Press 4 for create record\n");

 }
void record()
{
	int id[5],mo[12],i;
	char *name;
	clrscr();
	puts("Enter the id\n");
	scanf("%d",&id);
	puts("Enter the Name\n");
	gets(name);
	puts("Enter the mo no\n");
	scanf("%d",&mo);
}