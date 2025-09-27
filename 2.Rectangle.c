#include<stdio.h>
int main()
{
    int length, breadth, perimeter, area, diagonal;

    printf("Enter length of rectangle: ");
    scanf("%d", &length);

    printf("Enter breadth of rectangle: ");
    scanf("%d", &breadth);
    
    perimeter = 2 * (length + breadth);
    area = length * breadth;
    diagonal = sqrt(length*length+breadth*breadth);

    printf("Perimeter of rectangle = %d\n", perimeter);
 
    printf("area of rectangle = %d\n", area);
    
    printf("diagonal length of this rectangle = %d\n", diagonal);
    return 0;
}