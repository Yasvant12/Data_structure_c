#include<stdio.h>
int main()
{
	int arr[50],i,j,n,k,count=0,temp;
	printf("Enter the no of index:\n");
	scanf("%d",&n);
	printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
    	scanf("%d",&arr[i]);
	}
	 for(i=0;i<n;i++)
    {
    	for(j=i+1;j<n;j++)
    	{
    		if(arr[i]>arr[j])
    		{
    			temp=arr[i];
    			arr[i]=arr[j];
    			arr[j]=temp;
			}
			
		}
	}
		printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    printf("%d\n",arr[i]);
return 0;
}
			
