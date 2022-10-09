#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *link;
};
struct node *start=NULL;
  
struct node* createnode()
{
	struct node *n;
	n=(struct node*)malloc(sizeof(struct node));
	return n;
}
void insertend()
{
	struct node *temp,*p;
	temp=createnode();
	printf("Enter the data");
	scanf("%d",&temp->info);
	temp->link=NULL;
	if(start==NULL)
	{
		start=temp;
	}
	else
	{
		p=start;
		while(p->link!=NULL)
		{
			p=p->link;
		}
		p->link=temp;
		
	}
}
void insertbeg()
{
	struct node *temp,*p;
	temp=createnode();
	printf("Enter the data");
	scanf("%d",&temp->info);
	temp->link=NULL;
	if(start==NULL)
	{
		start=temp;
	}
	else
	{
		temp->link=start;
		start=temp;
	
		
	}
	printf("Node inserted\n");
}

void deletenode()
{
	struct node *temp;
	if(start==NULL)
	{
		printf("List is empty");
	}
	else
	{
		temp=start;
		start=start->link;
		free(temp);
	}
}
void viewlist()
{
	struct node *t;
	if(start==NULL)
	{
		printf("List is Empty");
	}
	else
	{
		t=start;
		while(t!=NULL)
		{
			printf("%d ",t->info);
			t=t->link;
		}
	}
}
int menu()
{
	int choice;
	printf("\nMENU:::\n1.Insert the node:");
	printf("\n2.View List:");
	printf("\n3.Delete node:\n4.Insertatbegining\n5.Exit:\n Enter Your Choice::\n");
	scanf("%d",&choice);
	return (choice);
	
}
int main()
{
	while(1){
		switch(menu())
		{
			case 1:insertend();break;
	    	case 2: viewlist();break;
			case 3: deletenode();break;
			case 4:insertbeg();break;
			case 5:exit(0);
			default:printf("Invalid number");
							
		}
	}
}
