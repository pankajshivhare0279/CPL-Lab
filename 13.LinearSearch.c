#include<stdio.h>
int main()
 {
   int a[5]={10,55,5,55,5};
   int key;
   printf("enter value to be searched :");
   scanf("%d",&key);
   int i,counter=0;
   for(i=0;i<5;i++)
      { if (key==a[i])
        printf("value found at position %d\n",i);
        counter++;
      }
      
   if (counter==0)
      { 
         printf("value not found");   
      }   
   return 0;
 }     
   