#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
    int data;
    int exp;
    struct node *next;
};
void display(struct node **q)
{
    struct node *p;
    p=*q;
    while(p!=NULL)
    {
	printf("%d * x^%d + ",p->data,p->exp);
	p=p->next;
    }


}

void insert(struct node **q,int coef,int pow)
{
    struct node *temp,*p;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=coef;
    temp->exp=pow;
    temp->next=NULL;
    if(*q==NULL)
    {
	*q=temp;
    }
    else
    {
	p=*q;
	while(p->next!=NULL)
	    p=p->next;
	p->next=temp;
    }
}
void add(struct node **q,struct node **r,struct node **s)
{
    struct node *p,*t,*u;
    p=*q;
    t=*r;

	if(p->exp==t->exp)
	{
	    u=p;
	    p->data=p->data+t->data;
	    p->exp=p->exp;
	    p=p->next;
	    t=t->next;
	}
	else if((p->exp)>(t->exp))
	{
	    u=p;
	    p=p->next;
	}
	else
	{
	    u=t;
	    t=t->next;
	}
	*s=u;
    while(p!=NULL&&t!=NULL)
    {
	if(p->exp==t->exp)
	{
	    p->data=p->data+t->data;
	    p->exp=p->exp;
	    u->next=p;
	    p=p->next;
	    t=t->next;
	    u=u->next;
	}
	else if((p->exp)>(t->exp))
	{
	    u->next=p;
	    p=p->next;
	    u=u->next;
	}
	else
	{
	    u->next=t;
	    t=t->next;
	    u=u->next;
	}

    }
    if(p==NULL)
    {
	u->next=t;
    }
    if(t==NULL)
    {
	u->next=p;
    }
}
void mul(struct node **q,struct node **r,struct node **s)
{
	struct node *a,*b,*c,*temp;
	a=*q;
	while(a!=NULL)
	{
		b=*r;
		while(b!=NULL)
		{
			temp=(struct node *)malloc(sizeof(struct node));
			temp->data=a->data*b->data;
			temp->exp=a->exp+b->exp;
			temp->next=NULL;
			if(*s==NULL)
			{
				*s=temp;
				c=temp;
			}
			else
			{
				while(c->next!=NULL)
				c=c->next;
				c->next=temp;
				b=b->next;
			}
		}
		a=a->next;
	}
     /*	c=*s;
	while(c!=NULL)
	{
		temp=c;
		c=c->next;
		while(c!=NULL)
		{
			if(temp->exp==c->exp)
			{
				temp->data=temp->data+c->data;
				temp->exp=c->exp;

			}
		}

	} */

}
void main()
{
    struct node *q,*r,*s;
    q=r=s=NULL;
    clrscr();
    //printf("Enter the 1st polynomial equ.\n");
    insert(&q,3,2);
    insert(&q,4,1);
    insert(&q,2,0);
    insert(&r,4,4);
    insert(&r,3,3);
    insert(&r,5,2);
    insert(&r,6,1);
    printf("-------------------\n");
    display(&q);
    printf("\n-----------------\n");
    display(&r);
   // add(&q,&r,&s);
   // printf("\n------------------\n");
   // display(&s);
    mul(&q,&r,&s);
    printf("\n---------------------\n");
    display(&s);
    getch();
}
