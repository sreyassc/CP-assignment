 
#include <stdio.h>
void main()
 {
   int a[50],item,n,flag;
   printf("Enter the number of elements \n);
   scanf(%d",&n);
   printf("Enter the elements one by one\n");
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   printf("The elements are\n");
   for(i=0;i<n;i++)
   printf("%d\n",a[i]);
   printf("Enter the item to be search\n");
   scanf("%d",&item);
   for(i=0;i<n;i++)
    {
       if(item==a[i])
         {
           flag++;
           printf("Item found at location\t%d.",i+1);
         }
     }
    if(flag==0)
        {
          printf("\nItem not found in the array");
          }
     else
       {
         printf("\n %d found in the array %d times",item,flag);
        }
 }
