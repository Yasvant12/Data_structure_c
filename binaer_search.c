//BINARY SEARCH IMPLEMENTATION IN C

#include<stdio.h>
void binar_search(int*,int,int);
int main()
{
	int item,i,n;
	printf("Enter the no of size:  ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the data %d data \n",n);
	for(i=0;i<n;i++)
	{
		scanf(" %d",&arr[i]);
	}
	printf("Enter the item to be searched:    ");
	scanf("%d",&item);
    binar_search(arr,n,item);
    return 1;

}
void binar_search(int a[],int n,int item)
{
	int start=0,end=n-1,m;
	while(start<end)
	{
		m=(start+end)/2;
		if(a[m]==item)
		{
			printf("Item searched:\n");
		}
		else if(a[m]<item)
		{
			start=m+1;
		}
		else
		{
			end=m-1;
		}
	}
}
