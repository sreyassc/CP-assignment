 
#include<stdio.h>
void main()
 {
   int a[50],i,n,j,temp:
   printf("Enter the  number of elements \n)"
   scanf("%d",&n);
   printf("Enter the elements one by one \n");
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   printf("The elements are\n");
   for(i=0;i<n;i++)
   printf("%d\n",a[i]);
   for(i=0;i<n;i++)
    {
      for(j=0;j<n-1;j++)
       {
         if(a[j]>a[j+1])
           {
             temp=a[j];
             a[j]=a[j+1];
             a[j+1]=temp;
            }
         }
     }
   printf("The sorted elements are\n");
   for(i=0;i<n;i++)
     {
       printf("%d\t",a[i]);
     }
    }
   
