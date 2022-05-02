		  #include<stdio.h>
		  #include<conio.h>
		  void main()
		  {
			char *a[5],*aa;
			int i,j,a1,a2;
			clrscr();
			printf("Enter the value\n");
			for(i=0;i<5;i++)
			{
			fflush(stdin);
			scanf("%s",a[i]);
			}
		    /*   for(i=0;i<4;i++)
			{
			for(j=i+1;j<5;j++)

			if(strcmp(a[i],a[j])>0)
			{
				strcpy(aa,a[j]);

				strcpy(a[j],a[i]);
				strcpy(a[i],aa);

			}



			}
			for(i=0;i<4;i++)
			{
			for(j=i+1;j<5;j++)

			if(strcmp(a[i],a[j])<0)
			{
				strcpy(aa,a[j]);

				strcpy(a[j],a[i]);
				strcpy(a[i],aa);


			}
		  }
		  for(i=0;i<4;i++)
			{
			for(j=i+1;j<5;j++)

			{
			a1=strlen(a[i]);
			a2=strlen(a[j]);
			if(a1<=a2)
			{
				strcpy(aa,a[j]);

				strcpy(a[j],a[i]);
				strcpy(a[i],aa);
			}


			 }
			}     */
			for(i=0;i<4;i++)
			{
			for(j=i+1;j<5;j++)

			{
			a1=strlen(a[i]);
			a2=strlen(a[j]);
			if(a1<=a2)
			{
				if(strcmp(a[i],a[j])>0) {
				strcpy(aa,a[j]);

				strcpy(a[j],a[i]);
				strcpy(a[i],aa);
			}


			}
			 }
			}
			 for(i=0;i<5;i++)
			{
				printf("%s\n",a[i]);
			}
			getch();

		     }