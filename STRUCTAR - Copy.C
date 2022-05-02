    #include<stdio.h>
    #include<conio.h>
    void main()
    {

	struct  arr
	{
	      int arr1[5];

	};

	  struct arr s;
	  int sum=0,i;
	  clrscr();

	  printf("Enter the value\n");
	  for(i=0;i<=4;i++)
	  {
	      scanf("%d",&s.arr1[i]);
	      sum=sum+s.arr1[i];
	  }
	  printf("%d",sum);
	  getch();


    }