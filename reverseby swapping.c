#include <stdio.h>
int main()
{
    int array[1000],i,j,n,temp;
    
                scanf("%d",&n);
                for(i=0;i<n;i++)
                {
                	scanf("%d",&array[i]);
				}
				for(i=0;i<n;i++)
				{
					for(j=i+1;j<n;j++)
					{
						temp=array[i];
						array[i]=array[j];
						array[j]=temp;
					}
				}
				for(i=0;i<n;i++)
				{
					printf("%d",array[i]);
				}
    //end = n - 1;
    
    //for (c = 0; c < n; c++) {
      //  scanf("%d", &array[c]);
    //}
    
  //  for (c = 0; c < n/2; c++) {
    //    t = array[c];
      //  array[c] = array[end];
        //array[end] = t;    
        //end--;
    //}
    
   // printf("Reversed array elements are:\n");
    
    //for (c = 0; c < n; c++) {
      //  printf("%d ", array[c]);
    //}
    
    return 0;
}

