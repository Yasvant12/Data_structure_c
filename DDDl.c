#include<stdio.h>
#include<stdlib.h>
void insertatfirst();
void display();
int menu();
void insertatlast();
struct node *createnode();

struct node{
	struct node *prev;
	int data;
	struct node *next;
};
struct node *createnode()
{
	struct node *t;
	t=(struct node*)malloc(sizeof(struct node*));
	return t;
}
struct node *head=NULL;

void insertatfirst()
{
struct node *temp,*tem;
temp=createnode();

printf("Enter the data:\n");
scanf("%d",&(temp->data));
temp->prev=NULL;
temp->next=NULL;
if(head==NULL)
{
	head=temp;
}
else
{
	tem=head;
	temp->next=head;
	tem->prev=temp;
	head=temp;

}

printf("Data inserted:\n");
}


 void insertatlast()
{
   struct node *temp,*t;
   temp=createnode();
   printf("Enter data:  ");
   scanf("%d",&temp->data);	
   temp->next=NULL;
   temp->prev=NULL;
   if(head==NULL)
   {
	head=temp;
   }
   else
   {
   	t=head;
   	while(t->next !=NULL)
   	{
   	 t=t->next;	
	}
	t->next=temp;
	temp->prev=t;
	
   }
   printf("node inserted");
}
void display()
{
	struct node *t;
	if(head==NULL)
	{
		printf("You can't display\n'");
	}
	else
	{
		printf("\nThe node is\n");
		t=head;
		while(t!=NULL)
		{
			printf(" %d",t->data);
			t=t->next;
		}
	}
	//printf("Data inserted:");
}
 int menu()
{
	int choice;
	printf("\nMain menu\n");
	printf("1.insertatfirsr\n\n2.insertatlast\n\n3.display\n\n3 Exit\n\nchoose  ");
	scanf("%d",&choice);
	return(choice);
}

int main()
{
	while(1)
	{
		switch(menu())
		{
			case 1:insertatfirst();break;
			case 2:insertatlast();break;
			case 3:display();break;
			case 4:exit(0);
			default :printf("You entered wrong number:\n");
		}
	}
}


