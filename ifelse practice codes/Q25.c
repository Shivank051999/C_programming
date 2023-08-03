//Q25. Write a program in C which is a Menu-Driven Program to compute the area of the various geometrical shape. 
#include <stdio.h>

int main() 
{
    int choice;
    float radius, length, width, base, height;
    const float PI = 3.14159;

    printf("\nMenu:\n");
    printf("1. Area of Circle\n");
    printf("2. Area of Rectangle\n");
    printf("3. Area of Triangle\n");
    printf("4. Exit\n");

    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    if (choice == 1) 
    {
        printf("Enter the radius of the circle: ");
        scanf("%f", &radius);
        if (radius < 0) 
        {
            printf("Invalid input! Radius cannot be negative.\n");
        } 
        else 
        {
            float area = PI * radius * radius;
            printf("Area of the circle: %.2f square units\n", area);
        }
    } 
    else if (choice == 2) 
    {
        printf("Enter the length and width of the rectangle (separated by space): ");
        scanf("%f %f", &length, &width);
        if (length < 0 || width < 0) 
        {
            printf("Invalid input! Length and width cannot be negative.\n");
        } 
        else 
        {
            float area = length * width;
            printf("Area of the rectangle: %.2f square units\n", area);
        }
    } 
    else if (choice == 3) 
    {
        printf("Enter the base and height of the triangle (separated by space): ");
        scanf("%f %f", &base, &height);
        if (base < 0 || height < 0) {
            printf("Invalid input! Base and height cannot be negative.\n");
        } 
        else 
        {
            float area = 0.5 * base * height;
            printf("Area of the triangle: %.2f square units\n", area);
        }
    } 
    else if (choice == 4) 
    {
        printf("Exiting the program. Goodbye!\n");
    } 
    else 
    {
        printf("Invalid choice! Please enter a valid option.\n");
    }
    return 0;
}

