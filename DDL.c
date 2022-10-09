#include<stdio.h>
#include<stdlib.h>
struct node{
	struct node *prev;
	int data;
	struct node *next;
};
struct node *insert(struct node*,int); 
int main()
{
	struct node *head=NULL;
	struct node *ptr;
	int n;
	printf("Enter Number of node:\n");
	scanf("%d",&n);
    ptr=insert(head,n);
}

struct node * insert (struct node *head,int n)
{
	struct node *temp;
	
}
