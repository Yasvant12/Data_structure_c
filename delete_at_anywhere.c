#include<stdio.h>
int main()
{
	int i,size,index,arr[100];
	printf("Enter the number of index:\n");
	scanf("%d",&size);
		printf("Enter the elements:\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
//	printf("Enter the elements you want to insert:\t");
//	scanf("%d",&ele);
	printf("Enter the index:\n");
	scanf("%d",&index);
	if(index<=0 || size>=index)
	printf("invalid position");
	else{
		
			for(i=index;i<=size-1;i++)
			{
				arr[i]=arr[i+1];
			}
		//	arr[index]=ele;
		//	size--;
		printf("After deletion:\n");
				for(i=0;i<size-1;i++)
	{
			printf("%d\t",arr[i]);
		}
	}
			
//}
return 0;
}
