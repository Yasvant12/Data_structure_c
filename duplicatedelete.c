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
    	for(j=i+1;j<n;)
    	{
    		if(arr[i]==arr[j] && i!=j)
    		{
    			count++;
    			for(k=j;k<=n-1;k++)
    			{
    			arr[k]=arr[k+1];
                }
                n--;
    		//count++;
    			//printf("duplicate element's is=%d=%d and \nlocation %d and %d\n",arr[i],i);
			}
			j++;
		}
	}
	if(count==0)
	{
	printf("no duplicate no:\n");
	}
	else
	{
	printf("After removing the duplicate elements:\n");
	for(i=0;i<n;i++)
	printf("%d\n",arr[i]);
}



}
