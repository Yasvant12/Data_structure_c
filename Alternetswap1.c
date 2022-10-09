#include<stdio.h>

int main() {

   int i, t, num, arr[100];

   printf("Enter size of array:");
   scanf("%d", &num);

   printf("Enter array elements:");
   for (i = 0; i < num; i++) {
       scanf("%d", &arr[i]);
   }

   i = 0;
   while (i < num - 1) {
       t = arr[i];
       arr[i] = arr[i + 1];
       arr[i + 1] = t;
       i = i + 2;
   }

   printf("Array list after swapping:");
   for (i = 0; i < num; i++) {
       printf("%d ", arr[i]);
   }

   return 0;
}
