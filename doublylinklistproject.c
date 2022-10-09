#include<stdio.h>
#include<stdlib.h>
struct node{
	struct node *prev;
	int data;
	struct node *next;
};

void insertatbegning(struct node **start)
{
		struct node *p;
		int d;
	p=(struct node*)malloc(sizeof(struct node*));
	printf("Enter the data u want to insert");
    scanf("%d",&d);
	p->data=d;
	p->prev=NULL;
    p->next=NULL;
    if(*start==NULL)
    {
        *start=p;
    }
    else
    {

        p->next=*start;
        *start=p;

    }
}
void insertatlast(struct node **start)
{

    struct node *p,*t;
    int d;
	p=(struct node*)malloc(sizeof(struct node*));
	printf("Enter the data u want to insert");
    scanf("%d",&d);
	p->data=d;
	p->prev=NULL;
	p->next=NULL;
	if(*start==NULL)
    {
        *start=p;
    }
    else{
            t=*start;
    while(t->next!=NULL)
    {

        t=t->next;
    }
    p->prev=t;
    t->next=p;

    }
}
  void insertatspecificposition()
  {
	
  }
void display(struct node **start)
{
    struct node *ptr;
    printf("\n printing values...\n");
    if(*start==NULL)
    {

        printf("Link list is empty");
    }
    else
    {
    ptr = *start;
    while(ptr != NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }

    }
}
int main()
{
    struct node *start=NULL;
    int d;
    printf(":::MAIN MENU:::\n");
    printf("1.Insert at begning\n2.insert at end\n3.insert at specific position\n 4.display\n choose: ");
    scanf("%d",&d);
    while(1)
    {
    	 switch(d)
    {
    	case 1: insertatbegning(&start);break;
    	case 2:  insertatlast(&start);break;
    	case 3:break;
    	case 4: display(&start);break;
    	default:printf("Worng number\n");
	}
	}
   

   
  
   

	return 0;

}
