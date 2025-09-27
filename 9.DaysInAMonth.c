#include<stdio.h>
int main()
{
  int n;
  printf("enter Month number :");
  scanf("%d",&n);
  
  switch(n)
      {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        printf("31 days");
        break;
        case 2:
        printf("28 or 29 days");
        break;
        case 6:
        case 9:
        case 11:
        printf("30 days");
        break;
      }
  default(n)
      {  
        printf("invalid input");
      }
  return 0;
}  
        