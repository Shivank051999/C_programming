//Q14. Write a C program to check whether a triangle is Equilateral, Isosceles or Scalene.

#include <stdio.h>

int main() 
{
    float side1, side2, side3;

    printf("Enter the length of side 1: ");
    scanf("%f", &side1);

    printf("Enter the length of side 2: ");
    scanf("%f", &side2);

    printf("Enter the length of side 3: ");
    scanf("%f", &side3);

    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) 
    {
        if (side1 == side2 && side2 == side3) 
        {
            printf("It's an Equilateral triangle.\n");
        } 
        else if (side1 == side2 || side1 == side3 || side2 == side3) 
        {
            printf("It's an Isosceles triangle.\n");
        } else 
        {
            printf("It's a Scalene triangle.\n");
        }
    } else 
    {
        printf("The given sides do not form a valid triangle.\n");
    }
    return 0;
}
