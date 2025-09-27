#include <stdio.h>
int main(){
  float c ,F;
  printf("enter the value of temp in celcius");
  scanf("%f",&c);
  F = ((9/5)*c)+32;
  printf("value of temp in F will be %f",F);
  return 0;
}