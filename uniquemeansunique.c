#include<stdio.h>
int main()
{
	int arr[50],i,j,n,k,count=0;
	printf("Enter the no of index:\n");
	scanf("%d",&n);
	printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
    	scanf("%d",&arr[i]);
	}
	  for(i=0;i<n;i++)
    {
    	count=count^arr[i];
	}
	printf("unique element is=%d",count);
}
