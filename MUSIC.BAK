       #include<stdio.h>
       #include<conio.h>
       #include<dos.h>
       void main()
       {
	int i,arr[8]={256,288,320,341,384,426,480,512};
	char ch;
	clrscr();
	printf("play music using 1,2,3,4,5,6,7,8\n");
	while((ch=getch())!=13)
	{
		i=ch-49;
		sound(arr[i]);
		delay(40);
	}
	nosound();
       }