#include<stdio.h>

int main()
{
    int a,b,tmp;
    printf("enter no. first no. (a): ");
    scanf("%d",&a);

    printf("enter no. second no. (b):");
    scanf("%d", &b);


    tmp=a;
    a=b;
    b=tmp;

    printf("now value of a is : %d\n",a);
    printf("now value of b is : %d\n",b);

    return 0;
}

