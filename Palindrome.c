#include<stdio.h>
int main()
 {
   Char str[20];
   int i, n, count=0;
   printf("Enter a string\n");
   gets(str);
   n=strlen(str);
   for(i=0;i<n/2;i++)
    {
      if(str[i]==str[n-i-1])
       {
          count++;
        }
    }
  if(count==i) 
   {
     printf("The entered string is palindrome \n");
   }
  else
   {
     printf("The entered string is not palindrome ");
    }
 return 0;
}
