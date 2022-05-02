		   /*if(ptr>=0)
	{
	       /*	 while(1)
		 {
			printf("Enter the your chice\n");
			printf("Enter 1:for create record\n");
			printf("Enter 2:for insert new record\n");
			printf("Enter 3:for show all record\n");
			printf("Enter 4:for show a single recod\n");
			printf("Enter 5:for exit\n");
			scanf("%d",&ch);

			switch(ch)
			{
			case 1:
				if(start!=NULL)
				{
					printf("created record\n");
					break;
				}
				printf("Enetr the no. of employee record\n");
				scanf("%d",&m);
				for(i=1;i<=m;i++)
					create_record();
			break;
			case 2:
				if(start==NULL)
				{
					printf("No created record\n");
				break;
				}
				insert_new_record();
			break;
			case 3:
				if(start==NULL)
				{
					printf("No created record\n");
				break;
				}
				show_all_record();
			break;
			case 4:
				if(start==NULL)
				{
					printf("No created record\n");
				break;
				}
				show_single_record();
			break;
		 }
	       }
	 }
	       else
	       {
			printf("WRONG PASSWORD\n");
			address();
	       }

	getch();

}*/
/*void employ()
{
	printf("Enter the 1:for display all record\n");
	printf("Enter the 2:for modify record\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			show_all_record();
		break;
		case 2:
			insert_new_record();
		break;

	}
} */