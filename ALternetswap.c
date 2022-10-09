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
	printf("skbahdsf");
	 i=0;
	do
    {
    			temp=arr[i];
    			arr[i]=arr[i+1];
    			arr[i+1]=temp;
    		//	printf("khshhdg");
    		i=i+2;
	}
	while(i<n);
	
		printf("after swaping:\n");
        for(i=0;i<n;i++)
      printf("%d\n",arr[i]);
     return 0;
}
			
