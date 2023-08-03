//Q7. Write a C program to accept the height of a person in centimeter and categorize the person according to their height. 
#include <stdio.h>

int main() 
{
    double height;

    printf("Enter the height in centimeters: ");
    scanf("%lf", &height); 
    if (height < 0) 
    {
        printf("Invalid height input.\n");
    } 
    else if (height < 150.0) 
    {
        printf("Short.\n");
    } 
    else if (height < 165.0) 
    {
        printf("Average height.\n");
    } 
    else if (height < 180.0) 
    {
        printf("Tall.\n");
    } 
    else 
    {
        printf("Very tall.\n");
    }
    return 0;
}
