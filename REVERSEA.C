#include<conio.h>
#include<iostream.h>
class reverse
{
	//int arr[10],i;
	public:
	void rev(int &,int &);

};
void reverse::rev(int & arr[],&n)
{
	int i,j;
	for(i=0,j=n;i<n,j>0;i++,j--)
	{
		arr[i]=arr[j];
	}
	cout<<"After Revrse Array\n";
	for(i=0;i<n;i++)
	cout<<arr[i]<<"\b";
}
void main()
{
	int arr[10],i,n;
	reverse A;
	clrscr();
	cout<<"Enter the No.in Array\n";
	cin>>n;
	for(i=0;i<n;i++)
	cin>>arr[i];
	A.rev(arr[],n);
	getch();
}