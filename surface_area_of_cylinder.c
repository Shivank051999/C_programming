#include <stdio.h>
#include <math.h>

int main() 
{
    float radius, height, sa;
    const float pi = 3.14159;

    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    sa = 2 * pi * radius * (radius + height);

    printf("Surface Area of the cylinder = %.2f\n", sa);
    return 0;
}
