#include<stdio.h>
#include<stdlib.h>
struct node{
	struct node *prev;
	int data;
	struct node *next;
};
void insertatbegning(struct node **start,int data)
{
		struct node *p;
	p=(struct node*)malloc(sizeof(struct node*));
	p->data=
}
int main()
{	
    struct node *start;
    int d;
    printf("Enter the data u want to insert");
    scanf("%d",&d);
    insertatbegning(&start,d);	
	
	return 0;
	
}
