#include<stdio.h>
int main()
  { 
    char op;
    printf("enter operator :");
    scanf("%c",&op);
    
    int a,b,res;
    printf("enter first value: ");
    scanf("%d",&a);
    printf("enter second value: ");
    scanf("%d",&b);
    
    
    switch (op)
      { 
        case'+':
        res=a+b;
        printf("result is %d",res);
        break;
       
        case'-':
        res=a-b;
        printf("result is %d",res);
        break;
        
       
        case'*':
        res=a*b;
        printf("result is %d",res);
        break;
        
       
        case'/':
        res=a/b;
        printf("result is %d",res);
        break;
        
        default:
        printf("invalid input");
      } 
    return 0;  
  }  