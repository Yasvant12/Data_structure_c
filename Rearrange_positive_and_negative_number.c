#include<stdio.h>
int main()
{
	int i,j,arr[30],n,temp;
	printf("Enter the number of index:\n");
	scanf("%d",&n);
	printf("Enter the number of element's");
	for(i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
    	int j=0;
       if(arr[i]<0)
       {
       	if (i != j)
       	{
       temp=arr[i];//=arr[i];
       arr[i]=arr[j];
     //  temp=arr[i];
     arr[j]=temp;
       //j++;
   }
   j++;
   }
       
	}
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
}
