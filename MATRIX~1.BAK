#include<iostream.h>
#include<conio.h>
//using namespace std;
//int m,n;
void squareMatrixMul(int a[5][5],int b[5][5],int m,int n){

    int i,j,k,sum=0,c[2][2]={0};
    for(i=1;i<=m;i++){
	//cout<<"hello";
	for(j=1;j<=n;j++){

	    sum=0;
	    for(k=1;k<=n;k++)
	    {
		sum=sum+(a[i][k]*b[k][j]);

	    }
	    c[i][j]=sum;
	}
    }
   for(i=1;i<=m;i++)
   {
	    for(j=1;j<=n;j++){
		cout<<c[i][j];
		cout<<" ";
	    }
	    cout<<endl;
    }

}

int main(){
    int a[5][5],b[5][5],m,n,i,j;
    clrscr();
    cout<<"Enter the size of matrix"<<endl;
    cout<<"enter the Size of row";
    cin>>m;
    cout<<"Enter the size of column";

    cin>>n;
    if(m==n){
    cout<<"Enter the value of 1st matrix";
    for(i=1;i<=m;i++){
	for(j=1;j<=n;j++){
	    cin>>a[i][j];
	}
    }
    for(i=1;i<=m;i++){

	    for(j=1;j<=m;j++){
		cout<<a[i][j];
		cout<<" ";
	    }
	    cout<<endl;
    }

      cout<<"Enter the value of 2nd matrix";

     for(i=1;i<=m;i++){
	for(j=1;j<=n;j++){
	    cin>>b[i][j];
	}
    }
    for(i=1;i<=m;i++){

	    for(j=1;j<=m;j++){
		cout<<b[i][j];
		cout<<" ";
	    }
	    cout<<endl;
    }
    squareMatrixMul(a,b,m,n);
    }else{
     cout<<"not square metrix";
    }
    return 0;
}
