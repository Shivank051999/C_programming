//Q9. Write a C program to accept a coordinate point in a XY coordinate system and determine in which quadrant the coordinate point lies. 
#include <stdio.h>

int main() 
{
    float x, y;

    printf("Enter the X and Y coordinates (separated by a space): ");
    scanf("%f %f", &x, &y);

    if (x > 0 && y > 0) 
    {
        printf("The coordinate point (%f, %f) is in Quadrant I.\n", x, y);
    } 
    else if (x < 0 && y > 0) 
    {
        printf("The coordinate point (%f, %f) is in Quadrant II.\n", x, y);
    } 
    else if (x < 0 && y < 0) 
    {
        printf("The coordinate point (%f, %f) is in Quadrant III.\n", x, y);
    } 
    else if (x > 0 && y < 0) 
    {
        printf("The coordinate point (%f, %f) is in Quadrant IV.\n", x, y);
    } 
    else if (x == 0 && y == 0) 
    {
        printf("The coordinate point is at the origin (0, 0).\n");
    } 
    else if (x == 0) 
    {
        printf("The coordinate point is on the Y-axis.\n");
    } else 
    {
        printf("The coordinate point is on the X-axis.\n");
    }
    return 0;
}
