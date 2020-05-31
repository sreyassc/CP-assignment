#include <stdio.h>
void main()
  {
    char str1[10],str2[10],str3[20],i=0,j=0;
    printf("Enter the first string\n");
    scanf("%s",&str1);
    printf("Enter the second string\n");
    scanf("%s",&str2); 
    printf("\n First string is:%s",str1); 
    printf("\n second  string is:%s",str2); 
    While(str1[j]!='\0')
      {
        str3[i]=str1[j];
        i++;
        j++;
       }
     j=0;
    While(str2[j]!='\0')
      {
        str3[i]=str2[j];
        i++;
        j++;
       }
    str3[j]='\0';
    
    printf("\n%s",str3); 
    return 0;
}
