#include<stdio.h>
int main()
{ 
   int i=1;
   int n;
   int sum=0;
   printf("enter value of n :");
   scanf("%d",&n);
   while(i<=n)
     {
       sum=sum+i;
       i++;
     }  
   printf("sum of %d natural no. is : %d",n,sum);  
   return 0; 
}   