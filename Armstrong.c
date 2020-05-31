#include<stdio.h> 
 void main()
     {
       int copy, n, armstrong,r;
       printf("Enter a number \n");
       scanf("%d",&n); 
       copy=n;
       while (n>0)
          {
            r=(n%10)*(n%10)*(n%10);
            armstrong=armstrong+r;
            n=n/10;
          } 
        if(armstrong==copy)
          {
           printf("The given number is armstrong");
          }
       else 
          { 
          printf("The given number is not armstrong ");
           }
     }
