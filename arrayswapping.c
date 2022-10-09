#include<stdio.h>
int main()
{
	int arr[100],arr1[100],n,i,j,m;
	printf("Enter firsr array element:\n");
	scanf("%d",&n);
	printf("Enter element's\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);
   }
   printf("Enter elemet for arr2");
   for(i=0;i<n;i++)
   {
   	scanf("%d",&arr1[i]);
   }
   printf(":::::::::::::::::::::::::After swapping::::::::::::::::::::::::\n");
   for(i=0;i<n;i++)
   {
   	arr[i]=arr[i]+arr1[i];
   	arr1[i]=arr[i]-arr1[i];
   	arr[i]=arr[i]-arr1[i];
   }
   printf("result\n");
   for(i=0;i<n;i++)
   {
   	printf(" %d",arr[i]);
   }
   printf(" \nresult 2nd array\n");
   for(i=0;i<n;i++)
   {
   	printf(" %d",arr1[i]);
   }
   
	
}
