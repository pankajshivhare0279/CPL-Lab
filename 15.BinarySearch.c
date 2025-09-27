#include<stdio.h>
int main()
 {
   int n;
   printf("enter size of list :");
   scanf("%d",&n);
   
   int i=0,a[n];
   for(i;i<n;i++)
   { 
     
      printf("enter element in the index %d :",i);
      
      scanf("%d",&a[i]);
   }  
  
   int key;
   printf("enter value to be searched :");
   scanf("%d",&key);
   
   int f=0;
   int l=n;
   while(f<=l)
   {
      int mid=(f+l)/2;
      
        if(a[mid]>key)
        { l=mid-1; }
        else if(a[mid]==key)
        { printf("value found at index %d\n",mid); 
          break;
        }
        else
        { f=mid+1; }
   }    
   if(f>l)
   {
      printf("value not found\n"); 
   }
   printf(a);
   return 0;
 }  