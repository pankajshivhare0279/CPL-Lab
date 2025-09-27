#include<stdio.h>
int main()
   {
     int a,b,n;
   
     printf("enter two consecutive numbers :");
     scanf("%d%d",&a,&b);
     printf("enter the value of n :");
     scanf("%d",&n);
     
     printf("%d\t%d\t",a,b);
     
     for (int i=2;i<n;i++)
        {
         int c = a+b;
         printf("%d\t",c);
         a=b;
         b=c;
        } 
     return 0;
   }  