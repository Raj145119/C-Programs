#include<iostream.h>
#include<conio.h>
#include<alloc.h>
#include<process.h>
struct node
{
	int data;
	struct node *next;
}*start;
int m,n;
class LinkList
{
	public:
	void create_list(int);
	void insert_at_end(int);
	void insert_at_begning(int);
	void insert_at_position(int,int);
	void slection(int);
	void display();
	void count();
	void delete1(int);
};
void LinkList::create_list(int item)
{
	 struct node  *p,*q;
	 /*"memory create"*/
	 q=(struct node*)malloc(sizeof(struct node));
	 q->data=item;
	 q->next=NULL;
	 if(start==NULL)
	 {
	 start=q;
	 return;
	 }
	 p=start;
	 while(p->next!=NULL)
		p=p->next;

		p->next=q;

}
void LinkList::insert_at_end(int item)
{
	struct node *p,*q;
	q=(struct node*)malloc(sizeof(struct node));

	q->data=item;
	q->next=NULL;

	p=start;

	while(p->next!=NULL)
	p=p->next;
	p->next=q;

}
void LinkList::insert_at_begning(int item)
{
	struct node *q;
	q=(struct node*)malloc(sizeof(struct node));
	q->data=item;
	q->next=start;
	start=q;

}
void LinkList::insert_at_position(int item, int pos)
{
	struct node *temp1,*q;
	int i;
	temp1=(struct node*)malloc(sizeof(struct node));
	temp1->data=item;

	q=start;
	if(pos==1)
	{
		insert_at_begning(m);
		return;
	}
	for(i=1;i<pos-1;i++)
	{
		q=q->next;
	}
	if(q==NULL)
	{
		cout<<"Wrong position\n";
		return;

	}
	temp1->next=q->next;
	q->next=temp1;
}
void LinkList::slection(int item)
{
	struct node *p,*q;
	if(item==start->data)
	{
		p=start;
		start=start->next;
		cout<<"data="<<p->data;
		free(p);
		return;
	}
	p=start;
	q=start;
	while(q->next->data!=item)
	{
		q=q->next;
		p=q->next;
	}
		cout<<"data="<<p->data;
	q->next=q->next->next;
		//q->next=p->next;
	free(p);
	if(q==NULL)
	cout<<"data not found in link list\n";
}
void LinkList::count()
{
	struct node *p;
	int i=0;
	p=start;
	while(p!=NULL)
	{
	i++;
	p=p->next;
	}
	cout<<"no of link list="<<i;

}
void LinkList::display()
{

	struct node *p;
	textcolor(RED);
	p=start;
	while(p!=NULL)
	{
	       cout<<"data="<<p->data<<endl;
		p=p->next;
	}
}
void LinkList::delete1(int pos)
{
	struct node *p,*q;
	int i;
	q=start;
	if(pos==1)
	{
		start=q->next;
		cout<<"data="<<q->data;
		free(q);
		return;
	}
	for(i=1;i<pos-1;i++)
	{
		q=q->next;
	}
	cout<<"Data="<<q->data;
	q->next=q->next->next;
	//free(q);
	if(q==NULL)
	cout<<"data not found in link list\n";

}

void main()
{
	LinkList obj;
	int ch,i,d;
	clrscr();
	start=NULL;
	while(1)
	{
		 clrscr();
		 cout<<"Enter your choice option\n";
		 cout<<"Enter 1: for create list\n";
		 cout<<"Enter 2: for insert at end\n";
		 cout<<"Enter 3: for insert at begning\n";
		 cout<<"Enter 4: for insert at position\n";
		 cout<<"Enter 5: for display\n";
		 cout<<"Enter 6: for slection\n";
		 cout<<"Enter 7: for count list\n";
		 cout<<"Enter 8: for exit\n";
		 cout<<"Enter 9: for delete1\n";
		 cin>>ch;
		 switch(ch)
		{
			case 1:
			if(start!=NULL)
			      cout<<"list al ready createed\n";

			      cout<<"Enter the no.of link list\n";

			cin>>n;
			for(i=0;i<n;i++)
			{
			      cout<<"Enter the data \n";
			      cin>>d;
			      obj.create_list(d);
			}
			break;
			case 2:
			if(start==NULL)
			{
			cout<<"node not create \n";
			break;
			}
			cout<<"Enter the data\n";
			cin>>n;
			obj.insert_at_end(n);
			break;
			case 3:
			if(start==NULL)
			{
			cout<<"node not create \n";
			break;
			}
			cout<<"Enter the data\n";
			cin>>n;
			obj.insert_at_begning(n);
			break;

			case 4:
			if(start==NULL)
			{
			cout<<"node not create \n";
			break;
			}
			cout<<"Enter the data\n";
			cin>>n;
			cout<<"Enter the  position\n";
			cin>>m;
			obj.insert_at_position(n,m);
			cout<<"Data insert at"<<m<<" position\n";
			break;
			case 5:
			if(start==NULL)

			{
				cout<<"NO LIST CREATE\n";
			break;
			}
			obj.display();
			break;
			case 6:
			if(start==NULL)
			{
				cout<<"List not created...create list first\n";
				break;
			}
			cout<<"Enter the data to slect\n";
			cin>>m;
			obj.slection(m);
			break;
			case 7:
			if(start==NULL)
			{
				cout<<" link list not create\n";
				break;
			}
			obj.count();
			break;
			case 8:
				exit(2);
			case 9:
			if(start==NULL)
			{

				cout<<"NO LIST CREATE\n";
				break;

			}
			cout<<"Enter the position\n";
			cin>>m;
			obj.delete1(m);
			break;

			default:
				cout<<"wrong choice\n";

		}
		getch();
	}

}


