#include<stdio.h>
#include<conio.h>
int search(int[],int,int);
void read(int[],int);
void print(int[],int);
void main()
{int arr[50],i,n,item,value;
clrscr();
printf("enter how many no. you want in array:");
scanf("%d",&n);
read(arr,n);
print(arr,n);
printf("enter the no. to be searched:");
scanf("%d",&item);
value=search(arr,n,item);
if(value==-1)
printf("%d is not in array",item);
else
printf("%d is at position %d",item,value);
getch();
}

void read(int arr[],int n)
{ int i;
for(i=0;i<n;i++)
{printf("enter the value at arr[%d]:",i);
scanf("%d",&arr[i]);
}
}

void print(int arr[],int n)
{ int i;
printf("content of the array:");
for(i=0;i<n;i++)
printf("%d\t",arr[i]);
}

int search(int arr[],int n,int item)
{ int i=0;
  while(i<n && (item != arr[i]))
  {
 i++;
 }
if(i>=n)
return -1;
else
return i;
}





