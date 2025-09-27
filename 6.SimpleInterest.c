#include<stdio.h>

int main()
{
  int p,t,r, SI;
  
  printf("write the principal amount : ");
  scanf("%d",&p);
  
  printf("write time (in years) : ");
  scanf("%d",&t);
  
  printf("write rate per annum : ");
  scanf("%d",&r);
  
  SI = (p*r*t)/100 ;
  
  printf("simple interest on your amount will be : %d",SI);
  
  return 0;
 
 }
 