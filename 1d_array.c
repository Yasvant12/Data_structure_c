#include<stdio.h>
void insert(int*,int);
void display(int*,int);
int main()
{
	int arr[20],i,n;
	printf("Enter the number of index:::\n");
	scanf("%d",&n);
	printf("Enter the Element's:\n");
	insert(arr,n);
	display(arr,n);
}
	void insert(int arr[],int n)
	{
		int i;
		for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}
	}
	void dispaly(int arr[],int n)
	{
		int i;
		for(i=0;i<n;i++)
		{
			printf("%d",arr[i]);
		}
		
	}
