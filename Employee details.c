#include<stdio.h>
    struct student {
                 char name[100];
                  int empid;
                 int salary; 
              }s; 
    void main()
      {
        struct student s[100];
        int i,n;
        printf("Enter the number of employees\n");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
        printf("Enter the name \n");
        scanf("%s",s[i].name);
        printf("Enter the employee Id code\n");
        scanf("%d",&s[i].empid);
        printf("Enter the salary\n");
        scanf("%d",&s[i].salary);
       }
        printf("The details of employees are\n");
        for(i=0;i<n;i++)
        {
        printf(" Name of employee:");
        printf("%s",s[i].name);
        
        printf("Employee code:");
        printf("%d",s[i].empid);
      
        printf(" salary:");
        printf("%d",s[i].salary);
        }
        
