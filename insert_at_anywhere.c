#include<stdio.h>
int main()
{
	int arr[40],i,n,ele,index;
	printf("Enter the number of index:\n");
	scanf("%d",&n);
		printf("Enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the elements you want to insert:\t");
	scanf("%d",&ele);
	printf("Enter the index:\n");
	scanf("%d",&index);
			for(i=n-1;i>=index;i--)
			{
				arr[i+1]=arr[i];
			}
			arr[index]=ele;
		//	n++;
				for(i=0;i<n+1;i++)
	{
			printf("%d\t",arr[i]);
		}
			
}
