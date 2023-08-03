//Q15. Write a C program to check whether a triangle can be formed by the given value for the angles. 

#include <stdio.h>

int main() 
{
    float angle1, angle2, angle3;

    printf("Enter the value of angle 1: ");
    scanf("%f", &angle1);

    printf("Enter the value of angle 2: ");
    scanf("%f", &angle2);

    printf("Enter the value of angle 3: ");
    scanf("%f", &angle3);

    if (angle1 + angle2 + angle3 == 180) 
    {
        printf("The given angles can form a valid triangle.\n");
    } 
    else 
    {
        printf("The given angles cannot form a valid triangle.\n");
    }
    return 0;
}
