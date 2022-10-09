#include<stdio.h>
int main()
{
	int arr[50],i,n,temp;
	printf("Enter the no of index:\n");
	scanf("%d",&n);
	printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
    	scanf("%d",&arr[i]);
	}
	 for(i=0;i<n;i+=2)
    {
    //	for(j=0;)
    	   if(i+1<n)
    	   {
    			temp=arr[i];
    			arr[i]=arr[i+1];
    			arr[i+1]=temp;
	      }

		//}
	}
		printf("after swaping:\n");
        for(i=0;i<n;i++)
      printf(" %d ",arr[i]);
return 0;
}
