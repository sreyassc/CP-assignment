 
#include<stdio.h>
void main()
 {
    int a[50].i,n,sum=0;
    float avg;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter the elements oneby one\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("The elements are\n");
    for(i=0;i<n;i++)
    printf("%d",a[i]);
    for(i=0;i<n;i++)
      {
        sum=sum+a[i];
      }
    avg=sum/n; 
    printf("The sum of the elements are %d\n",sum);
    printf("The average is %f\n",avg);
  }
