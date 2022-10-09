#include<stdio.h>
#include<string.h>
struct node
{
  int data;
  struct node *next;
  struct node *prev; 	
};
struct node *start=NULL;
int main()
{
      struct node *t;
	  struct node *p,*temp;
	  t=(struct node*)malloc(sizeof(struct node));
	  p=(struct node*)malloc(sizeof(struct node));
	  t->prev=NULL;
	  t->data=34;
	  t->next=NULL;
	  start=p;
	  p->prev=NULL;
	  p->data=38;
	  p->next=NULL;
	  t->next=p;
	  t->prev=t;
	  temp=start;
	  while(temp->next!=NULL)
	  {
	  	printf("%d\n",temp->data);
	  	temp->next=temp->next;
	  	
	  	
	  }
	 
	 //printf("%d",t->data); 
	  //printf("%d",p->data);                                                 	
}

