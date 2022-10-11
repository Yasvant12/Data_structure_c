#include<stdio.h>
#include<stdlib.h>
 struct node
 {
	int data;
	struct node *next;
 };
    struct node* insert(struct node*,int);
    struct node* reverse(struct node*  );

struct node* reverse(struct node* start)
{
	 struct node *t1,*t2,*str;
	 t1=t2=NULL;
	 str=start;
	 while(str!=NULL)
	 {
	 	t2=str->next;
	 	str->next=t1;
	 	t1=str;
	 	str=t2;
	 }
	 return (t1);

}

int main()
{

	int n,i,x;
		struct node *head=NULL;
		struct node *heat=NULL;
	printf("Enter the number of node\n");
	scanf("%d",&n);
	while(i!=n)
	{
		printf("Enter the data for node ");
		scanf("%d",&x);
      	head=insert(head,x);
      	i++;
		//	print(head);
	}
	heat=reverse(head);
print(heat);


	return 0;
}
 void print(struct node* head)
{
	struct node *p=head;
		printf("The list is\n");
	while(p != NULL)
	{

		printf(" %d",p->data);
		p=p->next;
	}
	printf("\n");
}
	 struct node* insert(struct node *head,int n)
{
	struct node *temp,*t;
	temp=(struct node*)malloc(sizeof(struct node*));
	temp->data=n;
	temp->next=NULL;
	if(head==NULL)
	{
		head=temp;
	}
	else
	{
		t=head;
    	while(t->next!=NULL)
	   {
		t=t->next;
	  }
    	t->next=temp;
    	return (head);
}
}



